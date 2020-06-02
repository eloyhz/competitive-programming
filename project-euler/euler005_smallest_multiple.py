# Project Euler #5: Smallest multiple
# https://www.hackerrank.com/contests/projecteuler/challenges/euler005/problem
# https://projecteuler.net/problem=5

def mcd(a, b):
	if b == 0:
		return a
	return mcd(b, a % b)


def mcm(a, b):
	return a * b // mcd(a, b)


def smallest_multiple(n):
	m = 1
	for i in range(2, n + 1):
		m = mcm(m, i)
	return m


if __name__ == "__main__":
	t = int(input())
	for _ in range(t):
		n = int(input())
		sm = smallest_multiple(n)
		print(sm)

