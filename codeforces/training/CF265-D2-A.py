# Colorful Stones (Simplified Edition)
# https://codeforces.com/contest/265/problem/A
#
# Author: eloyhz
# Date: Aug/25/2020


if __name__ == '__main__':
	s = input()
	t = input()
	i = 0
	j = 0
	while i < len(s) and j < len(t):
		if s[i] == t[j]:
			i += 1
		j += 1
	print(i + 1)

