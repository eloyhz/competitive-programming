# UVa 10611 - The Playboy Chimp
# https://onlinejudge.org/external/106/10611.pdf

import bisect

if __name__ == "__main__":
	n = int(input())
	chimps = [int(x) for x in input().split()]
	q = int(input())
	queries = [int(x) for x in input().split()]
	for q in queries:
		a = bisect.bisect_left(chimps, q)
		b = bisect.bisect_right(chimps, q)
		if a == len(chimps):
			tallest = chimps[-1]
			smallest = "X"
		else:
			tallest = chimps[a - 1] if a > 0 else "X"
		smallest = chimps[b] if b < len(chimps) else "X"
		print(tallest, smallest)
