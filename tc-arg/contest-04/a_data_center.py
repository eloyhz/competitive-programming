# TCArg 2020 - Contest #4
# Data Center
# https://codeforces.com/group/j1UosVRZar/contest/287848/problem/A

from sys import maxsize

if __name__ == "__main__":
	n = int(input())
	min_perimeter = maxsize
	for i in range(1, n + 1):
		if n % i == 0:
			perimeter = 2 * (i + n // i)
			min_perimeter = min(min_perimeter, perimeter)
	print(min_perimeter)
