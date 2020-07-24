# TCArg 2020 - Contest #9
# Removing Columns
# https://codeforces.com/group/j1UosVRZar/contest/288666/problem/A

if __name__ == "__main__":
	n, m = [int(x) for x in input().split()]
	table = []
	for _ in range(n):
		table.append(list(input()))
	i = 1
	operations = 0
	while i < n:
		if table[i - 1] > table[i]:
			for j in range(m):
				if table[i - 1][j] > table[i][j]:
					break
			for i in range(n):
				del table[i][j]
			operations += 1
			i = 1
		else:
			i += 1
	print(operations)
