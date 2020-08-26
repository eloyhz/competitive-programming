# Die Roll
# https://codeforces.com/contest/9/problem/A


if __name__ == '__main__':
	y, w = [int(x) for x in input().split()]
	r = 6 - max(y, w) + 1
	if r == 1 or r == 5:
		print(f'{r}/6')
	elif r == 2:
		print('1/3')
	elif r == 3:
		print('1/2')
	elif r == 4:
		print('2/3')
	elif r == 6:
		print('1/1')

