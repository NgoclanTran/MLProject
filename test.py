# file = open("output.csv",'r')
# features = file.read().split('\n')
# file.close()
# categories = ['company','holding page company','non-commercial','holding page non-commercial','error','pay-per-click','personal-family-blog','web-shop','portal/media','for sale','password protected']
# dict = {}
#
# for i in range(0,len(categories)):
#     for j in range(0, len(features)):
#         if categories[i]=='portal/media' and features[j] == 'yellow':
#             print "yeah!"
#         dict[(categories[i],features[j])] = 0
#
#
# file = open("featuresFormats.csv",'r')
# sites = file.read().split('\n')
# file.close()
#
# for i in range(0,len(sites)):
#     print i
#     site = sites[i].split(';')
#     for j in range(2,len(features)):
#
#         c = site[1]
#
#         f = features[j]
#
#         tmp =  dict[(c,f)]
#         dict[(c,f)] = tmp + 1
#
# print dict

a = [1,2,3,4,8,6]
print max(a)
