# UVa 1260 - Sales
# https://onlinejudge.org/external/12/1260.pdf

def test_case():
	n = int(input())
	a = [int(x) for x in input().split()]
	b = [0] * (n - 1)
	for i in range(1, n):
		for k in range(i):
			if a[k] <= a[i]:
				b[i - 1] += 1
	print(sum(b))


if __name__ == "__main__":
	t = int(input())
	for _ in range(t):
		test_case()
