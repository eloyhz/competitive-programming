# Word
# https://codeforces.com/contest/59/problem/A


if __name__ == '__main__':
	word = input()
	up = 0
	lo = 0
	for ch in word:
		if ch.islower():
			lo += 1
		else:
			up += 1
	if lo >= up:
		print(word.lower())
	else:
		print(word.upper())

