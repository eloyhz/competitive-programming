# Project Euler #4: Largest palindrome product
# https://www.hackerrank.com/contests/projecteuler/challenges/euler004/problem
# https://projecteuler.net/problem=4

def is_palindrome_str(num):
	num_str = str(num)
	n = len(num_str)
	for i in range(n // 2):
		if num_str[i] != num_str[n - i - 1]:
			return False
	return True


def largest_palindrome_product_tle(n):
	for i in range(n - 1, 101100, -1):
		for j in range(999, 100, -1):
			if i % j == 0:
				d = i // j
				if len(str(d)) == 3 and is_palindrome(i):
					return i


def largest_palindrome_product_wa(n):
	for i in range(999, 100, -1):
		for j in range(999, 100, -1):
			number = i * j
			if number >= n:
				continue
			if is_palindrome(number):
				return number


def reverse(n):
	result = 0
	while n > 0:
		result = 10 * result + n % 10
		n //= 10
	return result


def is_palindrome(n):
	return n == reverse(n)


def largest_palindrome_product(n):
	largest_palindrome = 0
	a = 999
	while a >= 100:
		if a % 11 == 0:
			b = 999
			db = 1
		else:
			b = 990
			db = 11
		while b >= a:
			if a * b <= largest_palindrome:
				break
			if is_palindrome(a * b) and a * b < n:
				largest_palindrome = a * b
			b -= db
		a -= 1
	return largest_palindrome


if __name__ == "__main__":
	tc = int(input())
	for _ in range(tc):
		n = int(input())
		result = largest_palindrome_product(n)
		print(result)
	
