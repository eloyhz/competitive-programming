# UVa 12192 - Grapevine
# https://onlinejudge.org/external/121/12192.pdf

import bisect
import time

# Similar to C++'s lower_bound
# Finally use Python's bisect
def bin_search_lower(arr, key):
	n = len(arr)
	lo = 0
	hi = n - 1
	while hi - lo > 1:
		mid = lo + (hi - lo) // 2
#		print(lo, mid, hi)
		if key < arr[mid]:
			hi = mid
		else:
			lo = mid
	return hi + 1 if arr[hi] == key else lo + 1

def best_lower(n, m, field, l):
	lower = []
	for i, f in enumerate(field):
		low = bisect.bisect(f, l)
		prev = False
		while 0 < low < m and f[low - 1] == l:
			prev = True
			low -= 1
			lower.append((min(m - low if m > low else 1, n - i), i, low))
		if not prev:
			lower.append((min(m - low if m > low else 1, n - i), i, low))
	return sorted(lower, reverse=True)


def best_upper(n, m, field, lower, u):
	best = 0
	for l in lower:
		side = l[0]
		while side >= 1:
			i = l[1] + side - 1
			j = l[2] + side - 1
			if i < 0 or i >= n or j < 0 or j >= m:
				break
			if field[i][j] <= u:
				best = max(best, side)
				break
			side -= 1
	return best


def test_case(n, m):
	field = []
	for _ in range(n):
		field.append([int(x) for x in input().split()])
	q = int(input())
	for _ in range(q):
		l, u = [int(x) for x in input().split()]
		lower = best_lower(n, m, field, l)
		upper = best_upper(n, m, field, lower, u)
		print(upper)
	print("-")
		

def test():
	n = 50
	print(bin_search_lower([13, 21, 25, 33, 34], n))
	print(bisect.bisect([13, 21, 25, 33, 34], n))

if __name__ == "__main__":
	# start_time = time.time()
	while True:
		n, m = [int(x) for x in input().split()]
		if n == m == 0:
			break
		test_case(n, m)
	# print(f"--- {time.time() - start_time} secs ---")
