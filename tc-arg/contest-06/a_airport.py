# TCArg 2020 - Contest #6
# Airport [TLE]
# https://codeforces.com/group/j1UosVRZar/contest/287776/problem/A

import math

if __name__ == "__main__":
	t = int(input())
	for _ in range(t):
		a, b = [int(x) for x in input().split()]
		lower = math.ceil(math.sqrt(a))
		higher = math.floor(math.sqrt(b))
		print(higher - lower + 1)

