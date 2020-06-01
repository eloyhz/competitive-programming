import math

EPS = 1e-9

def f(d, m, v, i):
	r = v
	for _ in range(m):
		r = r * (1 + i) - d
	return r

if __name__ == "__main__":
	lo = 0.01
	hi = 1100
	print(f"{hi - lo}, {(hi - lo) / EPS}, {math.log2((hi - lo) / EPS)}")
	print(f"lo = {lo}, f(lo) = {f(lo, 2, 1000, 0.1)}")
	print(f"hi = {hi}, f(hi) = {f(hi, 2, 1000, 0.1)}")
	while math.fabs(hi - lo) > EPS:
		print(f"{abs(hi - lo)}, {EPS}, {abs(hi - lo) > EPS}")
		mid = (lo + hi) / 2
		print(f"mid = {mid}, f(mid) = {f(mid, 2, 1000, 0.1)}")
		if f(mid, 2, 1000, 0.1) < 0:
			hi = mid
		else:
			lo = mid
		
