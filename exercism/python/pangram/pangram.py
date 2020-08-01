from collections import Counter

def is_pangram(sentence):
	alphabet = Counter("abcdefghijklmnopqrstuvwxyz")
	for c in sentence:
		if c.lower() in alphabet:
			alphabet[c.lower()] -= 1
	for k in alphabet:
		if alphabet[k] > 0:
			return False
	return True 
