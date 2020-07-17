# TCArg 2020 - Contest #3
# Two Buttons
# https://codeforces.com/group/j1UosVRZar/contest/287739/problem/E

def solve_wa(n, m):
	if m % 2 == 0:
		counter = 0
	else:
		counter = 1
		m += 1
	half = m // 2
	while n < half:
		n *= 2
		counter += 1
	if n == half:
		return counter + 1
	else:
		return counter + n - half + 1

def solve(n, m):
	counter = 0
	while n < m:
		if m % 2 == 0:
			m //= 2
		else:
			m += 1
		counter += 1
	counter += n - m
	return counter

if __name__ == "__main__":
	n, m = [int(x) for x in input().split()]
	if n > m:
		print(n - m)
	elif n == m:
		print(0)
	else:
		print(solve(n, m))
