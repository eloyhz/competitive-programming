# UVa 00927 - Integer Sequences
# https://onlinejudge.org/external/9/927.pdf


def test_case():
	a = [int(x) for x in input().split()]
	deg = a[0]
	a.pop(0)
	d = int(input())
	k = int(input())
	s = 0
	n = 0
	while s < k:
		n += 1
		s += n * d
	ev = 0
	for i in range(deg + 1):
		ev += a[i] * n ** i
	print(ev)


if __name__ == "__main__":
	tc = int(input())
	for _ in range(tc):
		test_case()
