# Sereja and Dima
# https://codeforces.com/contest/381/problem/A
#
# Author: eloyhz
# Date: Aug/25/2020


if __name__ == '__main__':
	n = int(input())
	cards = [int(x) for x in input().split()]
	sereja = 0
	dima = 0
	i = 0
	j = n - 1
	turn = 0	# sereja
	while i <= j:
		if cards[i] >= cards[j]:
			points = cards[i]
			i += 1
		else:
			points = cards[j]
			j -= 1
		if turn == 0:
			sereja += points
			turn = 1
		else:
			dima += points
			turn = 0
	print(f'{sereja} {dima}')

