#import nltk
#nltk.download()
from nltk.stem.snowball import DutchStemmer
st = DutchStemmer()
print st.stem('gedragen')