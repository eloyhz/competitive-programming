# Anton and Danik
# https://codeforces.com/contest/734/problem/A
#
# Author: eloyhz
# Date: Aug/25/2020


if __name__ == '__main__':
	n = int(input())
	games = input()
	anton = 0
	danik = 0
	for player in games:
		if player == 'A':
			anton += 1
		else:
			danik += 1
	if anton > danik:
		print('Anton')
	elif danik > anton:
		print('Danik')
	else:
		print('Friendship')

