# UVa 10341 - Solve It
# https://onlinejudge.org/external/103/10341.pdf

import math

EPS = 1e-9

def f(x, p, q, r, s, t, u):
	return p * math.exp(-x) + q * math.sin(x) + r * math.cos(x) + \
			s * math.tan(x) + t * x * x + u
	
def solve_it(p, q, r, s, t, u):
	lo = 0
	hi = 1
	if f(lo, p, q, r, s, t, u) * f(hi, p, q, r, s, t, u) > 0:
		return math.inf
	while math.fabs(hi - lo) > EPS:
		mid = (lo + hi) / 2
		if f(mid, p, q, r, s, t, u) <= 0:
			hi = mid
		else:
			lo = mid
	return mid


if __name__ == "__main__":
	while True:
		try:
			p, q, r, s, t, u = [int(x) for x in input().split()]
		except EOFError:
			break
		x = solve_it(p, q, r, s, t, u)
		# x = bisection(p, q, r, s, t, u)
		if math.isfinite(x):
			print(f"{x:.4f}")
		else:
			print("No solution")

