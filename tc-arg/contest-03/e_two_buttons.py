# TCArg 2020 - Contest #3
# Two Buttons
# https://codeforces.com/group/j1UosVRZar/contest/287739/problem/E

def solve(n, m):
	counter = 0
	half = m // 2
	while n < half:
		n *= 2
		counter += 1
	if n == half:
		return counter + 1
	else:
		return counter + n - half + 1

if __name__ == "__main__":
	n, m = [int(x) for x in input().split()]
	if n > m:
		print(n - m)
	elif n == m:
		print(0)
	elif m % 2 == 0:
		print(solve(n, m))
	else:
		print(1 + solve(n, m + 1))

