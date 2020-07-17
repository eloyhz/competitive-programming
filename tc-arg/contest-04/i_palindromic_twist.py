# TCArg 2020 - Contest #4
# Palindromic Twist
# https://codeforces.com/group/j1UosVRZar/contest/287848/problem/I

def is_palindromic_twist(n, s): 
	for i in range(n // 2):
		c1 = s[i]
		c2 = s[n - i - 1]
		if c1 == c2:
			continue
		if abs(ord(c2) - ord(c1)) == 2:
			continue
		return False
	return True

if __name__ == "__main__":
	t = int(input())
	for _ in range(t):
		n = int(input())
		s = input()
		if is_palindromic_twist(n, s):
			print("YES")
		else:
			print("NO")

