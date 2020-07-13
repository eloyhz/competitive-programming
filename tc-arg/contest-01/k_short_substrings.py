# TCArg 2020 - Contest #1
# Short Substrings
# https://codeforces.com/group/j1UosVRZar/contest/287327/problem/K

def short_substring(b):
	if len(b) == 2:
		return b
	a = b[0]
	for i in range(1, len(b), 2):
		a += b[i]
	return a


if __name__ == "__main__":
	t = int(input())
	for _ in range(t):
		b = input()
		print(short_substring(b))

