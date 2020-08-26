# Bear and Big Brother
# https://codeforces.com/contest/791/problem/A
#
# Author: eloyhz
# Date: Aug/25/2020


if __name__ == '__main__':
	a, b = [int(x) for x in input().split()]
	years = 0
	while a <= b:
		a *= 3
		b *= 2
		years += 1
	print(years)

