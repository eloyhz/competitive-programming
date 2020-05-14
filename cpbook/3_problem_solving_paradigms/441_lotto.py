# UVa 441 - Lotto
# https://onlinejudge.org/external/4/441.pdf

from itertools import combinations


if __name__ == "__main__":
	t = 1
	while True:
		s = [int(x) for x in input().split()] 
		if s[0] == 0:
			break
		if t > 1:
			print()
		t += 1
		s.pop(0)
		comb = combinations(s, 6)
		for c in list(comb):
			print(c[0], c[1], c[2], c[3], c[4], c[5])
