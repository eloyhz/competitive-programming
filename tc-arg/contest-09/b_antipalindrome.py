# TCArg 2020 - Contest #9
# Antipalindrome
# https://codeforces.com/group/j1UosVRZar/contest/288666/problem/B

def is_palindrome(s):
	n = len(s)
	for i in range(n // 2):
		if s[i] != s[n - i - 1]:
			return False
	return True


if __name__ == "__main__":
	s = list(input())
	n = len(s)
	while n > 0 and is_palindrome(s):
		n -= 1
		s.pop()
	print(n)

