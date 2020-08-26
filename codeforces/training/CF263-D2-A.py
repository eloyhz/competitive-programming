# Beautiful Matrix
# https://codeforces.com/contest/263/problem/A
#
# Author: eloyhz
# Date: Aug/25/2020


if __name__ == '__main__':
	for i in range(5):
		row = [int(x) for x in input().split()]
		for j in range(5):
			if row[j] == 1:
				print(abs(i - 2) + abs(j - 2))
