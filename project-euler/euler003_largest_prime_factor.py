# Project Euler #3: Largest prime factor
# https://www.hackerrank.com/contests/projecteuler/challenges/euler003/problem
# https://projecteuler.net/problem=3


def largest_prime_factor(number):
	while number % 2 == 0:
		number //= 2
	if number == 1:
		return 2
	x = 3
	while x * x <= number:
		last = x
		while number % x == 0:
			number //= x
		x += 2
	return number if number > 1 else last


if __name__ == "__main__":
	t = int(input())
	for _ in range(t):
		n = int(input())
		result = largest_prime_factor(n)
		print(result)

