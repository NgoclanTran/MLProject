#!/usr/bin/env python


from nltk.stem.snowball import SnowballStemmer

st = SnowballStemmer("dutch")
print st.stem('grows')

