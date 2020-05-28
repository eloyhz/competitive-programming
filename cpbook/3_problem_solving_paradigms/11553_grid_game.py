# UVa 11553 - Grid Game
# https://onlinejudge.org/external/115/11553.pdf

from itertools import permutations
from sys import maxsize

def game(n, grid, order):
	alice_candies = 0
	for i in range(n):
		alice_candies += grid[i][order[i]]
	return alice_candies
	

def test_case():
	n = int(input())
	grid = []
	for _ in range(n):
		row = [int(x) for x in input().split()]
		grid.append(row)
	perm = list(permutations(range(n)))
	best = maxsize
	for p in perm:
		result = game(n, grid, p)
		best = min(best, result)
	print(best)


if __name__ == "__main__":
	t = int(input())
	for _ in range(t):
		test_case()
