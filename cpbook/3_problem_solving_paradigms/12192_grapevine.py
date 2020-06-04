# UVa 12192 - Grapevine
# https://onlinejudge.org/external/121/12192.pdf

import bisect

def find_best(field, n, m, lower, upper):
	best = 0
	for i in range(n):
		j = bisect.bisect_left(field[i], lower)
		for size in range(best, n):
			end_row = i + size
			end_col = j + size
			if end_row >= n or end_col >= m or field[end_row][end_col] > upper:
				break
			best = max(best, size + 1)
	return best

def test_case(n, m):
	field = []
	for _ in range(n):
		field.append([int(x) for x in input().split()])
	q = int(input())
	for _ in range(q):
		l, u = [int(x) for x in input().split()]
		best = find_best(field, n, m, l, u)
		print(best)
	print("-")
		

if __name__ == "__main__":
	# start_time = time.time()
	while True:
		n, m = [int(x) for x in input().split()]
		if n == m == 0:
			break
		test_case(n, m)
	# print(f"--- {time.time() - start_time} secs ---")
