#!/usr/bin/env python

from nltk.stem.snowball import SnowballStemmer

st = SnowballStemmer("dutch")
file = open("stemmingtest.txt",'r')
words = file.read().split('\n')
for w in words[:]:
    print w + ": " + st.stem(w)

