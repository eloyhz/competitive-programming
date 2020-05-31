# UVa 628 - Passwords
# https://onlinejudge.org/external/6/628.pdf

dictionary = []
password = []

def generate(rule, i):
	if i == len(rule):
		print(''.join(password))
		return
	if rule[i] == "0":
		for digit in range(10):
			password.append(str(digit))
			generate(rule, i + 1)
			password.pop()
	elif rule[i] == "#":
		for word in dictionary:
			password.append(word)
			generate(rule, i + 1)
			password.pop()


def test_case(n):
	global dictionary
	dictionary = []
	for _ in range(n):
		word = input().strip()
		dictionary.append(word)
	m = int(input())
	rules = []
	print("--")
	for _ in range(m): 
		rule = input().strip()
		generate(rule, 0)


if __name__ == "__main__":
	while True:
		try:
			n = int(input())
		except EOFError:
			break
		test_case(n)

