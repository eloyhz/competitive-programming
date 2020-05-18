# UVa 00927 - Integer Sequences
# https://onlinejudge.org/external/9/927.pdf


def find_n(d, k):
	s = 0
	n = 0
	while s < k:
		n += 1
		s += n * d
	return n


def eval_poly(a, n):
	ev = 0
	deg = len(a)
	for i in range(deg):
		ev += a[i] * n ** i
	return ev


def test_case():
	a = [int(x) for x in input().split()]
	a.pop(0)
	d = int(input())
	k = int(input())
	n = find_n(d, k)
	result = eval_poly(a, n)
	print(result)


if __name__ == "__main__":
	tc = int(input())
	for _ in range(tc):
		test_case()
