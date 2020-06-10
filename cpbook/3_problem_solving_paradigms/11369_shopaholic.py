# UVa 11369 - Shopaholic
# https://onlinejudge.org/external/113/11369.pdf

def choose_items(n, prices):
	prices.sort(reverse=True)
	result = 0
	i = 0
	while i < n:
		if i + 2 < n:
			result += prices[i + 2]
		i += 3
	return result


if __name__ == "__main__":
	t = int(input())
	for _ in range(t):
		n = int(input())
		prices = [int(p) for p in input().split()]
		discount = choose_items(n, prices)
		print(discount)
		
