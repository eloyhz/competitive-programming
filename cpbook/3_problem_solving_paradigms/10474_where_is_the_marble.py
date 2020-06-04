# UVa 10474 - Where is the Marble?
# https://onlinejudge.org/external/104/10474.pdf

import bisect

if __name__ == "__main__":
	tc = 0
	while True:
		nq = input()
		if nq == "":
			continue
		n, q = [int(x) for x in nq.split()]
		if n == q == 0:
			break
		marbles = []
		i = 0
		while i < n:
			m = input()
			if m == "":
				continue
			i += 1
			marbles.append(int(m))
		marbles.sort()
		tc += 1
		print(f"CASE# {tc}:")
		i = 0
		while i < q:
			x = input()
			if x == "":
				continue
			i += 1
			x = int(x)
			y = bisect.bisect_left(marbles, x)
			if y >= n or marbles[y] != x:
				print(f"{x} not found")
			else:
				print(f"{x} found at {y + 1}")

			
