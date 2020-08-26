# Night at the Museum
# https://codeforces.com/contest/731/problem/A
#
# Author: eloyhz
# Date: Aug/25/2020


if __name__ == '__main__':
	s = input()
	current = 'a'
	rotations = 0
	for c in s:
		if c == current:
			continue
		x = ord(current) - ord('a')
		y = ord(c) - ord('a')
		rotations += min(abs(x - y), 26 - abs(x - y))
		current = c
	print(rotations)
