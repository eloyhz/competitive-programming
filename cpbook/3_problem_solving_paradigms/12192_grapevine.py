# UVa 12192 - Grapevine
# https://onlinejudge.org/external/121/12192.pdf

import bisect
import time

def fill_diagonals(n, m, field):
	diagonals = []
	if n >= m:
		diff = n - m
		size = m
		for i in range(m):
			diag = []
			for s in range(size):
				diag.append(field[0 + s][i + s])
			size -= 1
			diagonals.append(diag)
		row = 1
		size = m
		for _ in range(diff):
			diag = []
			for s in range(size):
				diag.append(field[row + s][0 + s])
			diagonals.append(diag)
			row += 1
		size = m - 1
		for _ in range(m - 1):
			diag = []
			for s in range(size):
				diag.append(field[row + s][0 + s])
			diagonals.append(diag)
			row += 1
			size -= 1
	else:
		diff = m - n
		size = n
		for i in range(n):
			diag = []
			for s in range(size):
				diag.append(field[i + s][0 + s])
			diagonals.append(diag)
			size -= 1
		col = 1
		size = n
		for _ in range(diff):
			diag = []
			for s in range(size):
				diag.append(field[0 + s][col + s])
			diagonals.append(diag)
			col += 1
		size = n - 1
		for  _ in range(n - 1):
			diag = []
			for s in range(size):
				diag.append(field[0 + s][col + s])
			diagonals.append(diag)
			col += 1
			size -= 1
	return diagonals


def find_best(diagonals, lower, upper):
	best = 0
	for diag in diagonals:
		l = bisect.bisect_left(diag, lower)
		u = bisect.bisect_right(diag, upper)
		"""
		if upper == diag[-1]:
			u = bisect.bisect(diag, upper)
		else:
			u = bisect.bisect_left(diag, upper)
		"""
		# print(f"diag={diag}, lower={lower}, l={l}, upper={upper}, u={u}, u-l={u - l}")
		if u == l and u < len(diag) and lower <= diag[u] <= upper:
			best = max(best, 1)
		else:
			best = max(best, u - l)
	return best

def test_case(n, m):
	field = []
	for _ in range(n):
		field.append([int(x) for x in input().split()])
	diagonals = fill_diagonals(n, m, field)
	q = int(input())
	for _ in range(q):
		l, u = [int(x) for x in input().split()]
		best = find_best(diagonals, l, u)
		print(best)
	print("-")
		

def test():
	a = [[1, 2, 3, 4],\
			 [5, 6, 7, 8], \
			 [9, 10, 11, 12], \
			 [13, 14, 15, 16], \
			 [17, 18, 19, 20], \
			 [21, 22, 23, 24]]
	da = fill_diagonals(6, 4, a)
	for d in da:
		print(d)
	b = []
	count = 1
	for _ in range(4):
		d = []
		for _ in range(6):
			d.append(count)
			count += 1
		b.append(d)
	print(b)
	db = fill_diagonals(4, 6, b)
	for d in db:
		print(d)


if __name__ == "__main__":
	# start_time = time.time()
	while True:
		n, m = [int(x) for x in input().split()]
		if n == m == 0:
			break
		test_case(n, m)
	# print(f"--- {time.time() - start_time} secs ---")
