# CSES - Trailing Zeros
# https://cses.fi/problemset/task/1618
# Ref: https://www.geeksforgeeks.org/count-trailing-zeroes-factorial-number/

if __name__ == "__main__":
	n = int(input())
	count = 0
	factor = 5
	while factor <= n:
		count += n // factor 
		factor *= 5
	print(count)
