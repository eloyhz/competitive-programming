# UVa 00893 - Y3K Problem
# https://onlinejudge.org/external/8/893.pdf

import datetime


if __name__ == "__main__":
	while True:
		n, d, m, y = [int(x) for x in input().split()]
		if n == d == m == y == 0:
			break
		print(n, d, m, y)
		date_original = datetime.date(y, m, d)
		date_new = date_original + datetime.timedelta(n)
		print(date_new.day, date_new.month, date_new.year)

