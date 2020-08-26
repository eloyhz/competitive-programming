# Police Recruits
# https://codeforces.com/contest/427/problem/A
#
# Author: eloyhz
# Date: Aug/25/2020


if __name__ == '__main__':
	n = int(input())
	a = [int(x) for x in input().split()]
	recruits = 0
	crimes = 0
	for x in a:
		if x < 0:
			if recruits > 0:
				recruits -= 1
			else:
				crimes += 1
		else:
			recruits += x
		#	if recruits > 10:
		#		recruits = 10
	print(crimes)
