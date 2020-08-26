# Shaass and Oskols
# https://codeforces.com/contest/294/problem/A
#
# Author: eloyhz
# Date: Aug/25/2020


if __name__ == '__main__':
	n = int(input())
	a = [int(x) for x in input().split()]
	m = int(input())
	for _ in range(m):
		x, y = [int(x) for x in input().split()]
		x -= 1  # adjust to 0-index
		if x > 0:
			a[x - 1] += y - 1
		if x < n - 1:
			a[x + 1] += a[x] - y
		a[x] = 0
	for x in a:
		print(x)
	
