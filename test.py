#import nltk
from nltk.stem.snowball import DutchStemmer

st = DutchStemmer()
print st.stem("schoon")
