# UVa 10077 - The Stern-Brocot Number System
# https://onlinejudge.org/external/100/10077.pdf

from fractions import Fraction

def stern_brocot_number(m, n):
	result = ""
	number = Fraction(m, n)
	lo_num, lo_den = 0, 1
	hi_num, hi_den = 1, 0
	while True:
		mid = Fraction(lo_num + hi_num, lo_den + hi_den)
		if mid < number:
			lo_num = mid.numerator
			lo_den = mid.denominator
			result += "R"
		elif number < mid:
			hi_num = mid.numerator
			hi_den = mid.denominator
			result += "L"
		else:
			return result


if __name__ == "__main__":
	while True:
		m, n = [int(x) for x in input().split()]
		if m == n == 1:
			break
		print(stern_brocot_number(m, n))

