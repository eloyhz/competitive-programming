# Team
# https://codeforces.com/contest/231/problem/A
#
# Author: eloyhz
# Date: Aug/25/2020


if __name__ == '__main__':
	n = int(input())
	problems = 0
	for _ in range(n):
		team = [int(x) for x in input().split()]
		if sum(team) >= 2:
			problems += 1
	print(problems)
