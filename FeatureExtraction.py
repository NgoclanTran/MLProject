from __future__ import division
import sys
import urllib2
import time
from math import log
from nltk.stem.snowball import SnowballStemmer

from threading import Timer
#class FeatureExtractor:

def loadData():
    file = open("domainlabels_train.csv",'r')
    words = file.read().split('\n') # 1 site on 1 line
    words.pop(0)  # first row contains NAME,TDL,CATEGORY  we don't need this

    #load list of stopwords (dutch stopwords)
    stopwordsNLFile = open("stopwords_nl.csv", 'r')
    stopwordsNL = stopwordsNLFile.read().split()  # 1 site on 1 line

    # load list of stopwords (english stopwords)
    stopwordsENFile = open("stopwords_en.csv", 'r')
    stopwordsEN = stopwordsENFile.read().split()  # 1 site on 1 line

    open("featuresSites.csv",'w').close() # clean the file before writing it
    featuresSites = open("featuresSites.csv", 'a')

    #file with all sites that I could make a connection
    open("connectedSites.csv",'w').close()
    connectedSites = open("connectedSites.csv",'a')

    index = 0;
    begin = time.time()
    features = set()
    while len(words) > 0 :
        print index

        #remove special character like "" from data
        element = words.pop(0).split(',')

        name = element.pop(0)
        name = name[1:-1]
        try:
            # append into a site containing www in fromt
            site = []
            site.append('http://')
            site.append('www.')
            site.append(name)
            site.append('.')
            site.append('be')
            site = ''.join(site)
            #site = 'http://www.universaleducationfoundation.be'
            print site
            # connect to server
            response = urllib2.urlopen(site,timeout=5)

            # get htlm page

            html = response.read()

            response.close()
            # print "html"

            # get all words in the html file
            items = html.split()

            # convert all characters to lowercase
            items = map(lambda x: x.lower(), items)

            #remove all code like html tags, javascript
            #all words containting special characters are removed
            features = []
            for i in items[:]:
                if not set('[~!@|#$/%^&<?>-=.1234567890*()_+{}":;\']+$').intersection(i):
                     features.append(i)



            # each word is unique in the list
            features = set(features)
            features = list(features)

            for i in stopwordsNL[:]:
                if i in features: features.remove(i)

            for i in stopwordsEN[:]:
                if i in features: features.remove(i)

            featuresSites.write(name)
            featuresSites.write(";")
            featuresSites.write(element[1].replace('\"',''))
            featuresSites.write(';')
            l = ""
            for f in features[:-1]:
                l = l + f +";"
            l = l + features[-1] + "\n"
            featuresSites.write(l)

            connectedSites.write(name)
            connectedSites.write('\n')
            #print l
        except urllib2.URLError:
            print 'error url'
            pass
        except:
            featuresSites.write("\n")
            pass
        index = index + 1




       # print time.time()-begin
       #  output = open('output.csv','w')
       #  string = ""
       #  for feature in features:
       #      string = string + feature + '\n'
       #
       #  output.write(string)
    print "Finish"
    #output.close()
    file.close()


def stemming(features):
    newFeatures = []
    st = SnowballStemmer("dutch")
    for f in features:
        try:
            w =st.stem(f)
            #print w
            newFeatures.append(w)
        except:
            continue

    return list(set(newFeatures))

def transformData():
    print "**************************************************************************"
    print "********             Converting sites into features               ********"
    print "**************************************************************************"

    file = open("output.csv",'r')
    features = file.read().split('\n')
    file.close()

    file = open("featuresSites.csv",'r')
    featuresSites = file.read().split('\n')
    print len(features)
    file.close()

    open("featuresFormats.csv", 'w').close()  # clean the file before writing it
    output = open("featuresFormats.csv", 'a')



    #for each site, we parse the features and remove words with special characters
    # convert each site into a array of features with the number of occurence
    # print len(allfeatures)
    index = 0
    while len(featuresSites) > 1 :
        try:
            print index
            index = index +1
            # get the features of a site
            f = featuresSites.pop(0)
            tmp = f.split(';')
            print tmp
            name = tmp[0]
            print name
            cat = tmp[1]
            print cat
            counts = []
            #index = 0
            for t in features[:]:
                #print index
                #index = index + 1
                c = f.count(t)

                counts.append(c)
            #print "start writing"
            # print the features of each site to outputfile
            l = ""
            l = l + name + ';'
            l = l + cat + ';'
            for i in counts[:-1]:
                l = l + str(i) + ";"
            l = l + str(counts[-1]) + "\n"

            output.write(l)
        except:
            continue




def dimensionReduction():

    print "**************************************************************************"
    print "********         Feature Extraction & Feature Selection           ********"
    print "**************************************************************************"

    file = open("featuresSites.csv", 'r')
    sites = file.read().split('\n')  # 1 site on 1 line

    file.close()

    file = open("featuresSites.csv", 'r')
    allfeatures =file.read().replace('\n', '')
    allfeaturesofallsites = allfeatures
    print allfeaturesofallsites
    file.close()

    numberSites = len(sites)


    # find all words and put it in 1 array
    #print len(sites)
    features = []
    print len(sites)
    while len(sites) > 0:
        s = sites.pop(0).split(";")
        #first element name site, we don't need
        s.pop(0)
        for e in s :
             features.append(e)

    # array contains unique words
    features = set(features)
    features = list(features)

    categories = ['company', 'holding page company', 'non-commercial', 'holding page non-commercial', 'error',
                  'pay-per-click', 'personal-family-blog', 'web-shop', 'porta/media', 'for sale',
                  'password protected']

    for c in categories[:]:
        try:
            features.remove(c)
        except:
            continue


    #remove special character like ','
    ff = []
    for e in features[:]:
        if set(',').intersection(e) and not set('\\').intersection(e):
            element = e.replace(',', '')
            ff.append(element)
        elif  set('\\').intersection(e):
            continue
        else:
            ff.append(e)

    # words that are too short,2 characters, are removed
    features = []
    for e in ff[:]:
        e = ff.pop(0)
        if len(e) > 2:
            features.append(e)

    print len(features)

    newFeatures = []

    index = 0
    file = open("featuresSites.csv", 'r')
    featuresPersSite = file.read().split('\n')
    file.close()

    index = 0

    newFeatures = []
    size = len(featuresPersSite)
    sizeF = len(features)
    for f in features:
        #print index
        try:
            df = 0
            for s in featuresPersSite[:]:
                if s.count(f) > 0 :
                    df = df + 1

            tf = allfeaturesofallsites.count(f)
            #print "size features: " + str(sizeF)
            #print "size: " + str(size)
            #print "df: " + str(df)
            #print "log: " + str(log((size+1)/(df+1),10))

            tfidf = tf /(1+log(((size)/(df)),10))
            if tfidf > 0.7 :
                newFeatures.append(f)
        except:
            continue
    #
    #
        index = index +1
    print len(newFeatures)
    print "stemming starts"
    stemmedFeatures = stemming(newFeatures)
    print stemmedFeatures
    open("output.csv",'a').close()
    file = open("output.csv",'w')
    l = ""
    for f in stemmedFeatures[:]:
       l = l + f +'\n'
    file.write(l)
    print len(stemmedFeatures)
    # #stemming process
    # #features = stemming(newFeatures)
    # return newFeatures


def featureExtractionTransformation():
    dimensionReduction()
    transformData()


reload(sys)
sys.setdefaultencoding("utf-8")
#loadData()
#dimensionReduction()
transformData()
#file = open("featuresFormats.csv",'r').read().split('\n')
#print len(file)
print "finish"