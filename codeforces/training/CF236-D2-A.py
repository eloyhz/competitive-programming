# Boy or Girl
# https://codeforces.com/contest/236/problem/A


from collections import Counter


if __name__ == '__main__':
	username = Counter(input())
	if len(username) % 2:
		print('IGNORE HIM!')
	else:
		print('CHAT WITH HER!')

