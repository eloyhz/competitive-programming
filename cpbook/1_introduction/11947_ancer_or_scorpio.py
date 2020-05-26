# UVa 11947 - Cancer or Scorpio
# https://onlinejudge.org/external/119/11947.pdf

import datetime


def get_sign(d):
	if d.month == 1 and d.day >= 21 or d.month == 2 and d.day <= 19:
		return "aquarius"
	elif d.month == 2 and d.day >= 20 or d.month == 3 and d.day <= 20:
		return "pisces"
	elif d.month == 3 and d.day >= 21 or d.month == 4 and d.day <= 20:
		return "aries"
	elif d.month == 4 and d.day >= 21 or d.month == 5 and d.day <= 21:
		return "taurus"
	elif d.month == 5 and d.day >= 22 or d.month == 6 and d.day <= 21:
		return "gemini"
	elif d.month == 6 and d.day >= 22 or d.month == 7 and d.day <= 22:
		return "cancer"
	elif d.month == 7 and d.day >= 23 or d.month == 8 and d.day <= 21:
		return "leo"
	elif d.month == 8 and d.day >= 22 or d.month == 9 and d.day <= 23:
		return "virgo"
	elif d.month == 9 and d.day >= 24 or d.month == 10 and d.day <= 23:
		return "libra"
	elif d.month == 10 and d.day >= 24 or d.month == 11 and d.day <= 22:
		return "scorpio"
	elif d.month == 11 and d.day >= 23 or d.month == 12 and d.day <= 22:
		return "sagittarius"
	elif d.month == 12 and d.day >= 23 or d.month == 1 and d.day <= 20:
		return "capricorn"


def test_case(tc):
	data = input()
	mm = int(data[:2])
	dd = int(data[2:4])
	yyyy = int(data[4:8])
	t1 = datetime.date(yyyy, mm, dd)
	t2 = datetime.timedelta(days=280)
	t3 = t1 + t2
	print(f"{tc} {t3.month:02}/{t3.day:02}/{t3.year} {get_sign(t3)}")


if __name__ == "__main__":
	tc = int(input())
	for t in range(1, tc + 1):
		test_case(t)

