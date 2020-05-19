# UVa 00893 - Y3K Problem
# https://onlinejudge.org/external/8/893.pdf

import datetime

days_in_month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

def is_leap_year(y):
	return (y % 4 == 0) and (y % 100 != 0 or y % 400 == 0)


def date_to_days(d, m, y):
	days = 0
	for i in range(1, y):
		days += 366 if is_leap_year(i) else 365
	for i in range(1, m):
		days += days_in_month[i - 1]
	days += d
	if m > 2 and is_leap_year(y):
		days += 1
	return days


def days_to_date(days):
	year, month = 1, 1
	while days >= 365:
		days -= 366 if is_leap_year(year) else 365
		if days <= 0:
			days += 366 if is_leap_year(year) else 365
			break
		year += 1
	if days > 0:
		if is_leap_year(year):
			days_in_month[1] += 1
		while days > days_in_month[month - 2]:
			days -= days_in_month[month - 1]
			month += 1
	return [days, month, year]


def test_case(n, d, m, y):
	# Reference https://tausiq.wordpress.com/2015/01/07/uva-893-y3k-problem/
	days_in_month[1] = 28
	days = date_to_days(d, m, y)
	days += n
	d, m, y = days_to_date(days)
	print(d, m, y)


if __name__ == "__main__":
	while True:
		n, d, m, y = [int(x) for x in input().split()]
		if n == d == m == y == 0:
			break
		test_case(n, d, m, y)


def test_case_overflow_error(n, d, m, y):
	date_original = datetime.date(y, m, d)
	date_new = date_original + datetime.timedelta(days=n)
	print(date_new.day, date_new.month, date_new.year)
