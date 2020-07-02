# UVa 10130 - SuperSale
# https://onlinejudge.org/external/101/10130.pdf

def knapsack(items, max_w):
	m = len(items)
	n = max_w
	dp = [[0 for _ in range(n + 1)] for _ in range(m + 1)]
	for i in range(1, m + 1):
		item_value = items[i - 1][0]
		item_weight = items[i - 1][1]
		for j in range(1, n + 1):
			if j - item_weight < 0:
				dp[i][j] = dp[i - 1][j]
			else:
				dp[i][j] = max(dp[i - 1][j], item_value + dp[i - 1][j - item_weight])
	return dp[m][n]
	

if __name__ == "__main__":
#	items = [(2000, 3), (3000, 4), (1500, 1)]
#	items = [(72, 17), (44, 23), (31, 24)]
#	items = [(64, 26), (85, 22), (52, 4), (99, 18), (39, 13), (54, 9)]
#	print(knapsack(items, 20))
	tc = int(input())
	for _ in range(tc):
		n = int(input())
		objects = []
		for _ in range(n):
			objects.append([int(x) for x in input().split()])
		total_value = 0
		people = int(input())
		for _ in range(people):
			max_weight = int(input())
			total_value += knapsack(objects, max_weight)
		print(total_value)

