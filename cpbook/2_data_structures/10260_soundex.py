# UVa 10260 - Soundex
# https://onlinejudge.org/external/102/10260.pdf


codes = {'B': 1, 'F': 1, 'P': 1, 'V': 1,\
				'C': 2, 'G': 2, 'J': 2, 'K': 2, 'Q': 2, 'S': 2, 'X': 2, 'Z': 2,\
				'D': 3, 'T': 3,\
				'L': 4,\
				'M': 5, 'N': 5,\
				'R': 6}

not_codes = {'A': 0, 'E': 0, 'I': 0, 'O': 0, 'U': 0, 'H': 0, 'W': 0, 'Y': 0}

def soundex(word):
	prev = 0
	code = 0
	for c in word:
		if c in not_codes:
			prev = 0
			continue
		if codes[c] == prev:
			continue
		prev = codes[c]
		if c in codes:
			code = code * 10 + codes[c]
	return code

if __name__ == "__main__":
	while True:
		try:
			word = input()
		except EOFError:
			break
		code = soundex(word)
		print(code if code > 0 else "")
