# CSES - Increasing Array
# https://cses.fi/problemset/task/1094/

if __name__ == "__main__":
	n = int(input())
	a = [int(x) for x in input().split()]
	result = 0
	for i in range(n - 1):
		if a[i] > a[i + 1]:
			result += a[i] - a[i + 1]
			a[i + 1] = a[i]
	print(result)
