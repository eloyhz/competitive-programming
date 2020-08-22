# RPC 08 - Tobby and Array [TLE]

from sys import stdin

def test_case(n, q):
	a = [int(x) for x in input().split()]
	for _ in range(q):
		l, r, k = [int(x) for x in input().split()]
		b = a[l - 1:r]
		b.sort()
		print(b[k - 1])

if __name__ == '__main__':
	for line in stdin:
		n, q = [int(x) for x in line.split()]
		test_case(n, q)
