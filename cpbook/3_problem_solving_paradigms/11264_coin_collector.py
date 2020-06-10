# UVa 11264 - Coin Collector
# https://onlinejudge.org/external/112/11264.pdf

import bisect

def simulate(coins):
	money = sum(coins)
	different_coins = set()
	# print(coins)
	while money > 0:
		highest = bisect.bisect_right(coins, money)
		highest_coin = coins[-1] if highest == len(coins) else coins[highest - 1] 
		# print(f"\tmoney={money}, highest={highest}, highest_coint={highest_coin}")
		different_coins.add(highest_coin)
		money -= highest_coin
	return len(different_coins)


if __name__ == "__main__":
	tc = int(input())
	for _ in range(tc):
		n = int(input())
		coins = [int(x) for x in input().split()]
		max_coins = simulate(coins)
		print(max_coins)
