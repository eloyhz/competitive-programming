# Vanya and Fence
# https://codeforces.com/contest/677/problem/A
#
# Author: eloyhz
# Date: Aug/25/2020


if __name__ == '__main__':
	n, h = [int(x) for x in input().split()]
	a = [int(x) for x in input().split()]
	count = 0
	for x in a:
		if x > h:
			count += 1
	print(len(a) + count)
	
