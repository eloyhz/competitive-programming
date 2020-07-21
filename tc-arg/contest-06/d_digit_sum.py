# TCArg 2020 - Contest #6
# Digit sum [AC]
# https://codeforces.com/group/j1UosVRZar/contest/287776/problem/D

def add_digits(num):
	if num < 10:
		return num
	total = 0
	while num >= 10:
		total = 0
		while num:
			total += num % 10
			num //= 10
		num = total
	return total

if __name__ == "__main__":
	a, b = [int(x) for x in input().split()]
	num = a
	result = add_digits(num)
	for _ in range(1, b):
		result *= a
		result = add_digits(result)
	print(result)
