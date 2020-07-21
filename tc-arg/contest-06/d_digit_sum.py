# TCArg 2020 - Contest #6
# Digit sum [RTE]
# https://codeforces.com/group/j1UosVRZar/contest/287776/problem/D

if __name__ == "__main__":
	a, b = [int(x) for x in input().split()]
	num = a
	for _ in range(1, b):
		num *= a
		while num >= 10:
			total = 0
			while num:
				total += num % 10
				num //= 10
			num = total
	print(total)
