# UVa 10976 - Fractions Again?!
# https://onlinejudge.org/external/109/10976.pdf
# Reference https://algorithmist.com/wiki/UVa_10976_-_Fractions_Again%3F!


def test_case(k):
	solutions = []
	for y in range(k + 1, 2 * k + 1):
		num = k * y
		den = y - k
		if num % den == 0:
			x = num // den
			solutions.append((x, y))
	print(len(solutions))
	for s in solutions:
		print("1/", k, " = 1/", s[0], " + 1/", s[1], sep="")


if __name__ == "__main__":
	while True:
		try:
			k = int(input())
		except EOFError:
			break
		except ValueError:
			break
		test_case(k)

