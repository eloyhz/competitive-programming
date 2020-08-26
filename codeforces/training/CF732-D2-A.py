# Buy a Shovel
# https://codeforces.com/contest/732/problem/A
#
# Author: eloyhz
# Date: Aug/25/2020


if __name__ == '__main__':
	k, r = [int(x) for x in input().split()]
	shovels = 1
	while k * shovels % 10 and (k * shovels - r) % 10:
		shovels += 1
	print(shovels)

