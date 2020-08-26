# Stones on the Table
# https://codeforces.com/contest/266/problem/A


if __name__ == '__main__':
	n = int(input())
	stones = input()
	neighbors = 0
	for i in range(1, n):
		if stones[i] == stones[i - 1]:
			neighbors += 1
	print(neighbors)
			
