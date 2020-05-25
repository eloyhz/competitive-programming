# Project Euler #2: Even Fibonacci numbers
# https://www.hackerrank.com/contests/projecteuler/challenges/euler002/problem
# https://projecteuler.net/problem=2

def even_fib_sum(n):
	f1, f2 = 0, 1
	even_sum = 0
	while f2 <= n:
		if f2 % 2 == 0:
			even_sum += f2
		f1, f2 = f2, f1 + f2
	return even_sum
	

if __name__ == "__main__":
	t = int(input())
	for _ in range(t):
		n = int(input())
		s = even_fib_sum(n)
		print(s)
