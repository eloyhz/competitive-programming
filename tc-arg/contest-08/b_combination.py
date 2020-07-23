# TCArg 2020 - Contest #8
# Combination
# https://codeforces.com/group/j1UosVRZar/contest/288544/problem/B

from collections import deque

if __name__ == "__main__":
	n = int(input())
	cards = []
	for _ in range(n):
		a, b = [int(x) for x in input().split()]
		cards.append((b, a))
	cards.sort(reverse=True)
	dq = deque(cards)
	counter = 1
	points = 0
	while dq and counter > 0:
		counter -= 1
		card = dq.popleft()
		counter += card[0]
		points += card[1]
	print(points)

