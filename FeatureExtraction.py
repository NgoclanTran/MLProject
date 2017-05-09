import urllib2
import time
from nltk.stem.snowball import DutchStemmer
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

            l = ""
            for f in features[:-1]:
                l = l + f +";"
            l = l + features[-1] + "\n"
            featuresSites.write(l)

            #print l
        except urllib2.URLError:
            print 'error url'
            featuresSites.write("\n")
            pass
        except:
            featuresSites.write("\n")
            print "time out"
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


# def stemming(self,features):
#     newFeatures = []
#     st = DutchStemmer()
#     for f in features:
#         w =st.stem(f)
#         print w
#         newFeatures.append(w)
#
#     return set(newFeatures)

def transformData(features):
    print "**************************************************************************"
    print "********             Converting sites into features               ********"
    print "**************************************************************************"


    file = open("featuresSites.csv",'r')
    allfeatures = file.read().split("\n")

    open("featuresFormats.csv", 'w').close()  # clean the file before writing it
    output = open("featuresFormats.csv", 'a')


    # write the features on the first line
    firstLine = ""
    for item in features[:-1]:
        firstLine = firstLine + item + ";"
    firstLine = firstLine + features[-1] + "\n"

    output.write(firstLine)


    #for each site, we parse the features and remove words with special characters
    # convert each site into a array of features with the number of occurence
    print len(allfeatures)
    while len(allfeatures) > 0 :

        # get words of the site into a array of strings
        f = allfeatures.pop(0).split(';')

        # remove special characters from strings
        ff = []
        for e in f[:]:
            if set(',').intersection(e) and not set('\\').intersection(e):
                element = e.replace(',', '')
                ff.append(element)
            elif not set(',').intersection(e) and set('\\').intersection(e):
                element = e.replace('\\', '')
                ff.append(element)
            elif set(',').intersection(e) and set('\\').intersection(e):
                element = e.replace('\\', '')
                element = element.replace(',', '')
                ff.append(element)
            else:
                ff.append(e)

        #count how much each feature appears on the site
        # the position correspond to the position of the features array
        counts = []
        for t in features[:]:
            c = ff.count(t)
            counts.append(c)

        # print the features of each site to outputfile
        l = ""
        for i in counts[:-1]:
            l = l + str(i) + ";"
        l = l + str(counts[-1]) + "\n"

        output.write(l)




def dimensionReduction():

    print "**************************************************************************"
    print "********         Feature Extraction & Feature Selection           ********"
    print "**************************************************************************"
    features = []
    file = open("featuresSites.csv", 'r')
    allfeatures =file.read().replace('\n', '')
    sites = file.read().split('\n')  # 1 site on 1 line
    numberSites = len(sites)


    # find all words and put it in 1 array
    features = []
    while len(sites) > 0:
        s = sites.pop(0).split(";")
        for e in s :
             features.append(e)


    # array contains unique words
    features = set(features)
    features = list(features)

    #remove special character like ','
    ff = []
    for e in features[:]:
        if set(',').intersection(e) and not set('\\').intersection(e):
            element = e.replace(',', '')
            ff.append(element)
        elif not set(',').intersection(e) and set('\\').intersection(e):
            element = e.replace('\\', '')
            ff.append(element)
        elif set(',').intersection(e) and set('\\').intersection(e):
            element = e.replace('\\', '')
            element = element.replace(',', '')
            ff.append(element)
        else:
            ff.append(e)

    # words that are too short,2 characters, are removed
    features = []
    for e in ff[:]:
        e = ff.pop(0)
        if len(e) > 2:
            features.append(e)

    #remove words that appears only 1 time
    #remove words that appears in to many sites
    newFeatures = []
    index = 0
    for f in features:
        count = allfeatures.count(f)
        if count > 1:
            newFeatures.append(f)
        elif count / numberSites < 0.6:
            newFeatures.append(f)

    #stemming process
   # features = self.stemming(newFeatures)


    return newFeatures

def naiveBayesClassifier():
    file = open("featuresFormats.csv",'r')




loadData()

# f = dimensionReduction()
# transformData(f)
# print "finish"
