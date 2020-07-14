# TCArg 2020 - Contest #2
# Vanya and Cards
# https://codeforces.com/group/j1UosVRZar/contest/287504/problems

from math import ceil

if __name__ == "__main__":
	n, x = [int(v) for v in input().split()]
	cards = [int(c) for c in input().split()]
	s = sum(cards)
	print(ceil(abs(s / x)))

