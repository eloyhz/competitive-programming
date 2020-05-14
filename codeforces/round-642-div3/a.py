# A. Most Unstable Array
# https://codeforces.com/contest/1353/problem/0


if __name__ == "__main__":
	t = int(input())
	for _ in range(t):
		n, m = [int(x) for x in input().split()]
		if n == 1:
			print(0)
			continue
		if n == 2:
			print(m)
			continue
		print(m * 2)

