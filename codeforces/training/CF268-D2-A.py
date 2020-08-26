# Games
# https://codeforces.com/contest/268/problem/A
#
# Author: eloyhz
# Date: Aug/25/2020


if __name__ == '__main__':
	n = int(input())
	games = []
	for _ in range(n):
		h, a = [int(x) for x in input().split()]
		games.append( (h, a) )
	count = 0
	for i in range(n):
		for j in range(n):
			if i == j:
				continue
			if games[i][0] == games[j][1]:
				count += 1
	print(count)
