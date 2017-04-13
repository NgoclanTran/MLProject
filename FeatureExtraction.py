import urllib2
import re
class FeatureExtractor:
    def loadData(self):
        file = open("domainlabels_train.csv",'r')
        words = file.read().split() # 1 site on 1 line
        words.pop(0)


        # remove special character like "" from data
        element = words.pop(0).split(',')
        name = element.pop(0)
        name = name[1:-1]

        tld = element.pop(0)
        tld = tld[1:-1]

        # append into a site containing www in fromt
        site = []
        site.append('http://')
        site.append('www.')
        site.append(name)
        site.append('.')
        site.append(tld)
        site = ''.join(site)
        print site

        # connect to server
        response =urllib2.urlopen(site)

        # get htlm page
        html = response.read()
        #print html
       # get the html page
       # print "data is: ", response.read()

        items = html.split()
        #print items

        print items[0]
        features = []
        # for i in items[:]:
        #     print i
        #     if set('[~!@#$%^&*()_+{}":;\']+$').intersection(items[0]):
        #         features.append(i)
        #
        # print features
FeatureExtractor().loadData()