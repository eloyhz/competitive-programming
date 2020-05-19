# UVa 10954 - Add All
# https://onlinejudge.org/external/109/10954.pdf

import heapq


def solve():
	a = [int(x) for x in input().split()]
	n = len(a)
	heapq.heapify(a)
	total = 0
	while len(a) > 1:
		cost = heapq.heappop(a) + heapq.heappop(a)
		heapq.heappush(a, cost)
		total += cost
	print(total)


if __name__ == "__main__":
	while True:
		n = int(input())
		if n == 0:
			break
		solve()
