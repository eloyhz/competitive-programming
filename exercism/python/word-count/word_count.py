import re

def count_words(sentence):
	count = {}
	symbols  = '[ !#$%_&()*+,-.:;<=>?@^]+|\\n|\\t'
	words = re.split(symbols, sentence)
	for w in words:
		w = w.lower().strip("'")
		if w == '':
			continue
		elif w not in count:
			count[w] = 1
		else:
			count[w] += 1
	return count

