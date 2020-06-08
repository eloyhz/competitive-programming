# UVa 11389 - The Bus Driver Problem
# https://onlinejudge.org/external/113/11389.pdf

def overtime_amount(n, d, r):
	morning = [int(x) for x in input().split()]
	afternoon = [int(x) for x in input().split()]
	morning.sort()
	afternoon.sort()
	overtime = 0
	for i in range(n):
		total_length = morning[i] + afternoon[n - i - 1]
		if total_length > d:
			overtime += total_length - d
	return overtime * r


if __name__ == "__main__":
	while True:
		n, d, r = [int(x) for x in input().split()]
		if n == d == r == 0:
			break
		payment = overtime_amount(n, d, r)
		print(payment)
