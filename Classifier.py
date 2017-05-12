#!/usr/bin/env python
from __future__ import division
from nltk.stem.snowball import SnowballStemmer
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
        p = [0,0,0,0,0,0,0,0,0,0,0] #prior of category
        #n = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]

        file = open("featuresFormats.csv",'r')
        sites = file.read().split('\n')
        file.close()

        file = open("featuresFormats.csv",'r')
        size = len(file.read().split('\n'))
        file.close()
        print "start p and n"
        for i in range(0,len(sites)-1):
            #print i
            s = sites[i].split(';')
            #print s
            c = s[1]
            if c == "company":
                p[0] = p[0] + 1
                # for j in range(2,len(sites)):
                #     n[0] = n[0] + int(s[j])
            elif c == "holding page company":
                p[1] = p[1] + 1
                # for j in range(2,len(sites)):
                #     n[1] = n[1] + int(s[j])
            elif c == "non-commercial":
                p[2] = p[2] + 1
                # for j in range(2,len(sites)):
                #     n[2] = n[2] + int(s[j])
            elif c == "holding page non-commercial":
                p[3] = p[3] + 1
                # for j in range(2,len(sites)):
                #     n[3] = n[3] + int(s[j])
            elif c == "error":
                p[4] = p[4] + 1
                # for j in range(2,len(sites)):
                #     n[4] = n[4] + int(s[j])
            elif c == "pay-per-click":
                p[5] = p[5] + 1
                # for j in range(2,len(sites)):
                #     n[5] = n[5] + int(s[j])
            elif c == "personal-family-blog":
                p[6] = p[6] + 1
                # for j in range(2,len(sites)):
                #     n[6] = n[6] + int(s[j])
            elif c == "web-shop":
                p[7] = p[7] + 1
                # for j in range(2,len(sites)):
                #     n[7] = n[7] + int(s[j])
            elif c == "portal/media":
                p[8] = p[8] + 1
                # for j in range(2,len(sites)):
                #     n[8] = n[8] + int(s[j])
            elif c == "for sale":
                p[9] = p[9] + 1
                # for j in range(2,len(sites)):
                #     n[9] = n[9] + int(s[j])
            elif c == "password protected":
                p[10] = p[10] + 1
                # for j in range(2,len(sites)):
                #     n[10] = n[10] + int(s[j])
            else:
                continue

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

        print "start likelihood"
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

        for i in range(0, len(sites)-1):
            site = sites[i].split(';')
            for j in range(2, len(features)):
                c = site[1]
                f = features[j]
                tmp = dict[(c, f)]
                dict[(c, f)] = tmp + int(site[j])

        pe = []
        for i in range(0,len(features)):
            pr = 0
            for j in range(0,len(categories)):
                f = features[i]
                c = categories[j]
                pr = pr + dict[(c,f)]
            pe.append(pr)

        pesize = 0
        for e in pe[:]:
            pesize = pesize + e

        open("probabilitiesEvidence.csv", 'w').close()
        pefile = open("probabilitiesEvidence.csv",'a')
        l =""
        print "----pe---"
        for i in range(0,len(pe)):
            print "*******"
            print features[i]
            print str(pe[i])
            print str(pe[i]/pesize)
            l = l + features[i] +';'
            l = l +str(pe[i]/pesize) + '\n'

        pefile.write(l)
        pefile.close()

        l = ""
        print "----cat---"
        for i in range(0, len(categories)):
            c = categories[i]
            for j in range(2, len(features)):
                tmp = (dict[(c, f)])/(p[i]*size)
                dict[(c, f)] = tmp
                l = l + str(tmp) + ';'
            l = l + '\n'

        likelihood.write(l)
        likelihood.close()

        print "finish"



    def predict(self,ip,outputfile):
        categories = ['company', 'holding page company', 'non-commercial', 'holding page non-commercial', 'error',
                      'pay-per-click', 'personal-family-blog', 'web-shop', 'portal/media', 'for sale',
                      'password protected']


        of = open(outputfile, 'a')

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
            features = map(lambda x: x.lower(), items)

            # # remove all code like html tags, javascript
            # # all words containting special characters are removed
            # features = []
            # for i in items[:]:
            #     if not set('[~!@|#$/%^&<?>-=.1234567890*()_+{}":;\']+$').intersection(i):
            #         features.append(i)
            #         # each word is unique in the list
            #         features = set(features)
            #         features = list(features)
            #
            #         for i in stopwordsNL[:]:
            #             if i in features: features.remove(i)
            #
            #         for i in stopwordsEN[:]:
            #             if i in features: features.remove(i)

            newFeatures = []
            st = SnowballStemmer("dutch")
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
                string = " ".join(newFeatures)
                try:
                    count = string.count(f)
                    #print count
                    #print "count : " + str(count)
                except:
                    count = 0

                featureVector.append(count)


            #print featureVector
            # import model

            # values of likelihood
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

            #values of probabilities evidence
            file = open("probabilitiesEvidence.csv",'r')
            pe = file.read().split('\n')
            probabilitiesEvidence = {}

            for i in range(0,len(features)):
                element = pe[i].split(';')
                probabilitiesEvidence[element[0]] = element[1]

            #values of priors
            file = open("proirCategory.csv", 'r')
            ps = file.read().split('\n')
            priors = {}

            for i in range(0, len(categories)):
                element = ps[i].split(';')
                priors[element[0]] = element[1]

            #compute the probability for category
            # -company
            c = 'company'
            p1= 1
            for i in range(0,len(featureVector)):
               try:

                    f = features[i]
                    w = float(featureVector[i])
                    if w > 0 :
                        t = float(likelihood[(c, f)]) * float(priors[c]) /float(probabilitiesEvidence[f])
                        p1 = p1 * t
               except:
                    continue


            # -holding page company
            c = 'holding page company'
            p2 = 1
            for i in range(0, len(featureVector)):
                try:

                    f = features[i]
                    w = float(featureVector[i])
                    if w > 0:
                        t = float(likelihood[(c, f)]) * float(priors[c]) / float(probabilitiesEvidence[f])
                        p2 = p2 * t
                except:
                    continue


            # - non-commercial
            c = 'non-commercial'
            p3 = 1
            for i in range(0, len(featureVector)):
                try:

                    f = features[i]
                    w = float(featureVector[i])
                    if w > 0:
                        t = float(likelihood[(c, f)]) * float(priors[c]) / float(probabilitiesEvidence[f])
                        p3 = p3 * t
                except:
                   continue


            # - error
            c = 'error'
            p4 = 1
            for i in range(0, len(featureVector)):
                try:

                    f = features[i]
                    w = float(featureVector[i])
                    if w > 0:
                        t = float(likelihood[(c, f)]) * float(priors[c]) / float(probabilitiesEvidence[f])
                        p4 = p4 * t
                except:
                    continue

            # - pay-per-click
            c = 'pay-per-click'
            p5 = 1
            for i in range(0, len(featureVector)):
                try:

                    f = features[i]
                    w = float(featureVector[i])
                    if w > 0:
                        t = float(likelihood[(c, f)]) * float(priors[c]) / float(probabilitiesEvidence[f])
                        p5 = p5 * t
                except:
                    continue

            # - personal-family-blog

            c = 'personal-family-blog'
            p6 = 1
            for i in range(0, len(featureVector)):
                try:

                    f = features[i]
                    w = float(featureVector[i])
                    if w > 0:
                        t = float(likelihood[(c, f)]) * float(priors[c]) / float(probabilitiesEvidence[f])
                        p6 = p6 * t
                except:
                    continue

            # - web-shop
            c = 'web-shop'
            p7 = 1
            for i in range(0, len(featureVector)):
                try:

                    f = features[i]
                    w = float(featureVector[i])
                    if w > 0:
                        t = float(likelihood[(c, f)]) * float(priors[c]) / float(probabilitiesEvidence[f])
                        p7 = p7 * t
                except:
                    continue


            # -portal/media
            c = 'portal/media'
            p8 = 1
            for i in range(0, len(featureVector)):
                try:

                    f = features[i]
                    w = float(featureVector[i])
                    if w > 0:
                        t = float(likelihood[(c, f)]) * float(priors[c]) / float(probabilitiesEvidence[f])
                        p8 = p8 * t
                except:
                    continue

            # - for sale
            c = 'for sale'
            p9 = 1
            for i in range(0, len(featureVector)):
                try:

                    f = features[i]
                    w = float(featureVector[i])
                    if w > 0:
                        t = float(likelihood[(c, f)]) * float(priors[c]) / float(probabilitiesEvidence[f])
                        p9 = p9 * t
                except:
                    continue

            # - password protected
            c = 'password protected'
            p10 = 1
            for i in range(0, len(featureVector)):
                try:

                    f = features[i]
                    w = float(featureVector[i])
                    if w > 0:
                        t = float(likelihood[(c, f)]) * float(priors[c]) / float(probabilitiesEvidence[f])
                        p10 = p10 * t
                except:
                    continue

            pi = [p1,p2,p3,p4,p5,p6,p7,p8,p9,p10]

            maxValue =  max(pi)
            of.write(categories[pi.index(maxValue)])
            of.write('\n')

        except urllib2.URLError:
            of.write("error")
            of.write('\n')
            pass
        except:
            of.write("error")
            of.write('\n')
            pass



