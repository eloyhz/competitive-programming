# CSES - Bit Strings
# https://cses.fi/problemset/task/1617/

if __name__ == "__main__":
	n = int(input())
	modulo = 10 ** 9 + 7
	print(2 ** n % modulo)
