# Way Too Long Words
# https://codeforces.com/group/j1UosVRZar/contest/287018/problem/C

def abbreviation(w):
	return w[0] + str(len(w) - 2) + w[-1]

if __name__ == "__main__":
	n = int(input())
	for _ in range(n):
		word = input()
		if len(word) > 10:
			print(abbreviation(word))
		else:
			print(word)

