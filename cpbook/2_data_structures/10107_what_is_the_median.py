# UVa 10107 - What is the Median?
# https://onlinejudge.org/external/101/10107.pdf

if __name__ == "__main__":
	a = []
	while True:
		try:
			x = int(input())
		except EOFError:
			break
		a.append(x)
		a.sort()
		n = len(a)
		mid = n // 2
		if n % 2 == 0:
			result = (a[mid - 1] + a[mid]) // 2
		else:
			result = a[mid]
		print(result)

