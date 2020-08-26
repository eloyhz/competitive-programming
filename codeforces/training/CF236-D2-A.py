# Boy or Girl
# https://codeforces.com/contest/236/problem/A
#
# Author: eloyhz
# Date: Aug/25/2020


from collections import Counter


if __name__ == '__main__':
	username = Counter(input())
	if len(username) % 2:
		print('IGNORE HIM!')
	else:
		print('CHAT WITH HER!')

