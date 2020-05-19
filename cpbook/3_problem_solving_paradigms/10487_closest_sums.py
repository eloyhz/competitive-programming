# UVa 10487 - Closest Sums
# https://onlinejudge.org/external/104/10487.pdf

import sys

def test_case(t, n):
	a = [0] * n
	for i in range(n):
		a[i] = int(input())
	m = int(input())
	print("Case ", t, ":", sep="")
	for _ in range(m):
		b = int(input())
		r = sys.maxsize
		for i in range(n - 1):
			for j in range(i + 1, n):
				s = a[i] + a[j]
				if abs(s - b) < r:
					r = abs(s - b)
					e = s
		print("Closest sum to ", b, " is ", e, ".", sep="")


if __name__ == "__main__":
	t = 0
	while True:
		t += 1
		n = int(input())
		if n == 0:
			break
		test_case(t, n)

