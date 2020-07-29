# Educational Codeforces Round 92
# A - LCM Problem (TLE)
# https://codeforces.com/contest/1389/problem/A

def gcd(a, b):
	if b == 0:
		return a
	else:
		return gcd(b, a % b)

def lcm(a, b):
	return (a * b) // gcd(a, b) 

def solve(l, r):
	for x in range(l, r):
		for y in range(x + 1, r + 1):
			if l <= lcm(x, y) <= r:
				return x, y
	return -1, -1

if __name__ == "__main__":
	t = int(input())
	for _ in range(t):
		l, r = [int(x) for x in input().split()]
		x, y = solve(l, r)
		print(x, y)

