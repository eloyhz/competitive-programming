# UVa 10954 - Add All
# https://onlinejudge.org/external/109/10954.pdf


def solve():
	a = [int(x) for x in input().split()]
	n = len(a)
	a.sort()
	total = a[0] + a[1]
	cost = total
	for i in range(2, n):
		cost += total + a[i]
		total += a[i]
	print(cost)


if __name__ == "__main__":
	while True:
		n = int(input())
		if n == 0:
			break
		solve()
