# UVa 11057 - Exact Sum
# https://onlinejudge.org/external/110/11057.pdf

import sys


def bin_search(a, v):
	n = len(a)
	left, right = 0, n - 1
	while left <= right:
		mid = left + (right - left) // 2
		if a[mid] == v:
			return mid
		elif v < a[mid]:
			right = mid - 1
		else:
			left = mid + 1
	return -1


if __name__ == "__main__":
	while True:
		try:
			n = int(input())
			prices = [int(x) for x in input().split()]
			money = int(input())
		except EOFError:
			break
		except ValueError:
			break
		if n == 2:
			pi = prices[0]
			pj = prices[1]
			if pi > pj:
				pi, pj = pj, pi
		else:
			prices = sorted(prices)
			rs = set()
			for i in range(n):
				p = prices[i]
				prices[i] = 0
				r = bin_search(prices, money - p)
				prices[i] = p
				if r >= 0:	# money = prices[i] + prices[r]
					if prices[i] < prices[r]:
						rs.add( (prices[i], prices[r]) )
					else:
						rs.add( (prices[r], prices[i]) )
			m = sys.maxsize
			for e in rs:
				if e[1] - e[0] < m:
					m = e[1] - e[0]
					pi = e[0]
					pj = e[1]
		print("Peter should buy books whose prices are", pi, "and", pj, end="")
		print(".")
		try:
			input()
		except EOFError:
			break
		print()
