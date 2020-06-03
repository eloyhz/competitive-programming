# UVa 12192 - Grapevine
# https://onlinejudge.org/external/121/12192.pdf

import bisect

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

def best_lower(m, n, field, l):
	lower = []
	for i, f in enumerate(field):
		low = bisect.bisect(f, l)
		if 0 < low < m and f[low - 1] == l:
			low -= 1
		print(low)
		lower.append((i, low, min(m - low, n - i)))
	print(lower)

def test_case(n, m):
	field = []
	for _ in range(n):
		field.append([int(x) for x in input().split()])
	for f in field:
		print(f)
	q = int(input())
	for _ in range(q):
		l, u = [int(x) for x in input().split()]
		print(l, u)
		lower = best_lower(m, n, field, l)
	print("-")
		

def test():
	n = 50
	print(bin_search_lower([13, 21, 25, 33, 34], n))
	print(bisect.bisect([13, 21, 25, 33, 34], n))

if __name__ == "__main__":
	while True:
		n, m = [int(x) for x in input().split()]
		if n == m == 0:
			break
		test_case(n, m)
