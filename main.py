#!/usr/bin/env python
import sys
from Classifier import Classifier

def main(argv):
    print "-------------------"
    print "start reading files "
    file = open(argv[0],'r')
    input = file.read().split('\n')
    file.close()


    classifier = Classifier()

    print "start prediction"
    print "-------------------"
    #assuming that there is only the domainname
    for s in input[:]:
        classifier.predict(s,argv[1])

    print "-------------------"
    print "end prediction"
    print "-------------------"


if __name__ == "__main__":
    main(sys.argv[1:])