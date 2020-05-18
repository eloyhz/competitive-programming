# UVa 11356 - Dates
# https://onlinejudge.org/external/113/11356.pdf

import datetime

months_map = {"January": 1, "February": 2, "March": 3, "April": 4,
"May": 5, "June": 6, "July": 7, "August": 8,
"September": 9, "October": 10, "November": 11, "December": 12}

months = ["January", "February", "March", "April", "May", "June",
"July", "August", "September", "October", "November", "December"]


def test_case(c, y, m, d, k):
	t1 = datetime.date(y, m, d)
	t2 = datetime.timedelta(days=k)
	t3 = t1 + t2
	print("Case ", c, ": ",  end="", sep="")
	day = str(t3.day) if t3.day > 9 else "0" + str(t3.day)
	print(t3.year, months[t3.month - 1], day, sep="-")



if __name__ == "__main__":
	tc = int(input())
	for t in range(tc):
		y, m, d = [x for x in input().split('-')]
		k = int(input())
		test_case(t + 1, int(y), months_map[m], int(d), k)

