from __future__ import division
from nltk.stem.snowball import DutchStemmer
import urllib2

class Classifier():
    feature = []
    def __init__(self):
        file = open("output.csv",'r')
        self.feature = file.read().split('\n')
        #print self.feature

    def calculateNk(self, category,feature):
        categories = ['company', 'holding page company', 'non-commercial', 'holding page non-commercial', 'error',
                      'pay-per-click', 'personal-family-blog', 'web-shop', 'porta/media', 'for sale',
                      'password protected']

        file = open("featuresFormats.csv",'r')
        sites = file.read().split('\n')
        file.close()
        count = 0
        for i in range(0,len(sites)):
            try:
                s = sites[i].split(';')
                c = s[1]
                if c == categories[category]:
                    count = count + s[feature+2]
            except:
                continue

        return count

    def learnModel(self):
        p = [0,0,0,0,0,0,0,0,0,0,0]
        n = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]

        file = open("featuresFormats.csv",'r')
        sites = file.read().split('\n')
        file.close()

        file = open("domainlabels_train.csv",'r')
        size = len(file.read().split('\n'))
        file.close()
        print "start p and n"
        for i in range(0,len(sites)):
            #print i
            s = sites[i].split(';')
            #print s
            c = s[1]
            if c == "company":
                p[0] = p[0] + 1
                for j in range(2,len(sites)):
                    n[0] = n[0] + int(s[j])
            if c == "holding page company":
                p[1] = p[1] + 1
                for j in range(2,len(sites)):
                    n[1] = n[1] + int(s[j])
            if c == "non-commercial":
                p[2] = p[2] + 1
                for j in range(2,len(sites)):
                    n[2] = n[2] + int(s[j])
            if c == "holding page non-commercial":
                p[3] = p[3] + 1
                for j in range(2,len(sites)):
                    n[3] = n[3] + int(s[j])
            if c == "error":
                p[4] = p[4] + 1
                for j in range(2,len(sites)):
                    n[4] = n[4] + int(s[j])
            if c == "pay-per-click":
                p[5] = p[5] + 1
                for j in range(2,len(sites)):
                    n[5] = n[5] + int(s[j])
            if c == "personal-family-blog":
                p[6] = p[6] + 1
                for j in range(2,len(sites)):
                    n[6] = n[6] + int(s[j])
            if c == "web-shop":
                p[7] = p[7] + 1
                for j in range(2,len(sites)):
                    n[7] = n[7] + int(s[j])
            if c == "portal/media":
                p[8] = p[8] + 1
                for j in range(2,len(sites)):
                    n[8] = n[8] + int(s[j])
            if c == "for sale":
                p[9] = p[9] + 1
                for j in range(2,len(sites)):
                    n[9] = n[9] + int(s[j])
            else:
                p[10] = p[10] + 1
                for j in range(2,len(sites)):
                    n[10] = n[10] + int(s[j])

        for i in range(0,len(p)):
            p[i] = p[i]/size

        categories = ['company', 'holding page company', 'non-commercial', 'holding page non-commercial', 'error',
                      'pay-per-click', 'personal-family-blog', 'web-shop', 'portal/media', 'for sale',
                      'password protected']

        open("proirCategory.csv", 'w').close()
        pf = open("proirCategory.csv",'a')
        for i in range(0,len(categories)):
            pf.write(categories[i])
            pf.write(';')
            pf.write(str(p[i]))
            pf.write('\n')

        pf.close()





        print "start nk"
        open("likelihood.csv", 'w').close()
        likelihood = open("likelihood.csv",'a')

        tmpfile = open("output.csv",'r')
        features = tmpfile.read().split('\n')
        tmpfile.close()

        dict = {}
        for i in range(0, len(categories)):
            for j in range(0, len(features)):
                dict[(categories[i], features[j])] = 0

        file = open("featuresFormats.csv", 'r')
        sites = file.read().split('\n')
        file.close()

        for i in range(0, len(sites)):
            site = sites[i].split(';')
            #print i
            for j in range(2, len(features)):
                c = site[1]
                f = features[j]
                tmp = dict[(c, f)]
                dict[(c, f)] = tmp + int(site[j])

        l = ""
        for i in range(0, len(categories)):
            c = categories[i]
            print i
            for j in range(2, len(features)):
                tmp = (dict[(c, f)]+1)/(n[categories.index(c)] + size)
                dict[(c, f)] = tmp
                l = l + str(tmp) + ';'
            l = l + '\n'

        likelihood.write(l)
        likelihood.close()
        print "finish"


        #print dict
                # file = open("featuresFormats.csv", 'r')
        # sites = file.read().split('\n')
        # file.close()
        # print n[0]
        # print "start nk"
        # print n[0]
        # for i in range(0, len(categories)):
        #
        #     ps= []
        #     for j in range(0,len(self.feature)):
        #         print "ij: " +str(i) + " " + str(j)
        #         nk = 0
        #         for k in range(0, len(sites)):
        #             #print "k: " +str(k)
        #             try:
        #                 s = sites[k].split(';')
        #                 c = s[1]
        #                 if c == categories[i]:
        #                     nk = nk + s[j + 2]
        #             except:
        #                 continue
        #
        #
        #         p =(nk+1) / (n[i]+size)
        #         ps.append(p)
        #     l = ""
        #     for pr in ps[:-1]:
        #         l = l + str(pr) + ";"
        #     l = l + str(ps[-1]) + "\n"
        #     likelihood.write(l)

    def predict(self,ip):
        categories = ['company', 'holding page company', 'non-commercial', 'holding page non-commercial', 'error',
                      'pay-per-click', 'personal-family-blog', 'web-shop', 'portal/media', 'for sale',
                      'password protected']

        site = []
        site.append('http://')
        site.append('www.')
        site.append(ip)
        site.append('.')
        site.append('be')
        site = ''.join(site)

        print site


        # load list of stopwords (english stopwords)
        stopwordsENFile = open("stopwords_en.csv", 'r')
        stopwordsEN = stopwordsENFile.read().split()  # 1 site on 1 line

        # load list of stopwords (dutch stopwords)
        stopwordsNLFile = open("stopwords_nl.csv", 'r')
        stopwordsNL = stopwordsNLFile.read().split()  # 1 site on 1 line
        try:
            # connection
            response = urllib2.urlopen(site, timeout=5)

            # get htlm page
            html = response.read()
            response.close()

            # get all words in the html file
            items = html.split()

            # convert all characters to lowercase
            items = map(lambda x: x.lower(), items)

            # remove all code like html tags, javascript
            # all words containting special characters are removed
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

            newFeatures = []
            st = DutchStemmer()
            for f in features:
                try:
                    w = st.stem(f)
                    newFeatures.append(w)
                except:
                    continue

            ff = open("output.csv",'r')
            features = ff.read().split('\n')
            ff.close()


            # convert new site into feature vector
            featureVector = []
            for f in features[:]:
                count = newFeatures.count(f)
                #print "count : " + str(count)
                featureVector.append(count)

            print featureVector
            # import model
            file = open("likelihood.csv",'r')
            likelihoodFile = file.read().split('\n')
            file.close()

            likelihood = {}
            #print len(categories)
            #print len(features)


            for i in range(0,len(categories)):
                #print "i: " + str(i)
                tmp = likelihoodFile[i].split(';')
                for j in range(0,len(features)-1):
                    #print "j: "  +  str(j)
                    p = tmp[j]
                    likelihood[(categories[i],features[j])] = p

            file = open("proirCategory.csv",'r')
            ps = file.read().split('\n')
            priors = {}

            for i in range(0,len(categories)):
                element = ps[i].split(';')
                priors[element[0]] = element[1]

            #compute the probability for category
            # -company
            p1= float(priors['company'])
            for i in range(0,len(featureVector)):
                f = features[i]
                c = 'company'
                w = float(featureVector[i])
                if w > 0 :
                    l = float(likelihood[(c, f)])
                    p1 = p1 * l



            # -holding page company
            p2 = float(priors['holding page company'])
            for i in range(0, len(featureVector)):
                f = features[i]
                c = 'holding page company'
                w = float(featureVector[i])
                if w > 0:
                    l = float(likelihood[(c, f)])
                    p2 = p2 * l
            print p2

            # - non-commercial
            p3 = float(priors['non-commercial'])
            for i in range(0, len(featureVector)):
                f = features[i]
                c = 'non-commercial'
                w = float(featureVector[i])
                if w > 0:
                    l = float(likelihood[(c, f)])
                    p3 = p3 * l * w
            print p3


            # - error
            p4 = float(priors['error'])
            for i in range(0, len(featureVector)):
                f = features[i]
                c = 'error'
                w = float(featureVector[i])
                if w > 0:
                    l = float(likelihood[(c, f)])
                    p4 = p4 * l
            print p4

            # - pay-per-click
            p5 = float(priors['pay-per-click'])
            for i in range(0, len(featureVector)):
                f = features[i]
                c = 'pay-per-click'
                w = float(featureVector[i])
                if w > 0:
                    l = float(likelihood[(c, f)])
                    p5 = p5 * l
            print p5

            # - personal-family-blog
            p6 = float(priors['personal-family-blog'])
            for i in range(0, len(featureVector)):
                f = features[i]
                c = 'personal-family-blog'
                w = float(featureVector[i])
                if w > 0:
                    l = float(likelihood[(c, f)])
                    p6 = p6 * l
            print p6
            # - web-shop
            p7 = float(priors['web-shop'])
            for i in range(0, len(featureVector)):
                f = features[i]
                c = 'web-shop'
                w = float(featureVector[i])
                if w > 0:
                    l = float(likelihood[(c, f)])
                    p7 = p7 * l
            print p7

            # -portal/media
            p8 = float(priors['portal/media'])
            for i in range(0, len(featureVector)):
                f = features[i]
                c = 'portal/media'
                w = float(featureVector[i])
                if w > 0:
                    l = float(likelihood[(c, f)])
                    p8 = p8 * l
            print p8

            # - for sale
            p9 = float(priors['for sale'])
            for i in range(0, len(featureVector)):
                f = features[i]
                c = 'for sale'
                w = float(featureVector[i])
                if w > 0:
                    l = float(likelihood[(c, f)])
                    p9 = p9 * l
            print p9

            # - password protected
            p10 = float(priors['password protected'])
            for i in range(0, len(featureVector)):
                f = features[i]
                c = 'password protected'
                w = float(featureVector[i])
                if w > 0:
                    l = float(likelihood[(c, f)])
                    p10 = p10 * l
            print p10


            pi = [p1,p2,p3,p4,p5,p6,p7,p8,p9,p10]
            biggestIndex = 0
            for i in range(0,len(pi)):
                if pi[biggestIndex] < pi[i]:
                    biggest= i

            print categories[biggestIndex]
        except urllib2.URLError:
            print 'error'
            pass
        except:
            print "ohoh error"

classifier = Classifier()
#classifier.learnModel()
classifier.predict("altex")
# ERROR
##classifier.predict("abc-events")