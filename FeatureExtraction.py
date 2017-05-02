import urllib2
import time
from threading import Timer
class FeatureExtractor:

    def loadData(self):
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
    def dimensionReduction(self):
        ##convert all characters to lowercase
           #     items = map(lambda x: x.lower(),items)
        # reduce dimension by
        # removing html code
        # removing stopwords
        # td fd
        print "hello"



FeatureExtractor().loadData()