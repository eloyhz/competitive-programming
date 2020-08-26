# Gravity Flip
# https://codeforces.com/contest/405/problem/A


if __name__ == '__main__':
	n = int(input())
	a = [int(x) for x in input().split()]
	a.sort()
	for x in a:
		print(f'{x} ', end='')
	print()
