# UVa 11221 - Magic square palindromes
# https://onlinejudge.org/external/112/11221.pdf


def is_palindrome(s):
	n = len(s)
	for i in range(n // 2):
		if s[i] != s[n - i - 1]:
			return False
	return True


def magic_square(line):
	sentence = [x for x in line if ord(x) >= ord('a') and ord(x) <= ord('z')]
	k = -1
	for i in range(101):
		if i * i == len(sentence):
			k = i
			break
	if is_palindrome(''.join(sentence)):
		return k
	else:
		return -1


if __name__ == "__main__":
	tc = int(input())
	for t in range(tc):
		line = input()
		k = magic_square(line)
		print(f"Case #{t + 1}:")
		if k >= 0:
			print(k)
		else:
			print("No magic :(")

