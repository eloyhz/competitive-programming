# UVa 11553 - Grid Game
# https://onlinejudge.org/external/115/11553.pdf

from itertools import permutations
from sys import maxsize
import copy

memo_perm = {}

def game(n, grid, order):
	alice_candies = 0
	for i in order:
		bob_column = 0
		for j in range(1, n):
			if grid[i][j] < grid[i][bob_column]:
				bob_column = j
		alice_candies += grid[i][bob_column]
		for k in range(n):
			grid[k][bob_column] = 1001
	return alice_candies
		

def test_case():
	global memo_perm
	n = int(input())
	grid = []
	for _ in range(n):
		row = [int(x) for x in input().split()]
		grid.append(row)
	if n in memo_perm:
		perm = memo_perm[n]
	else:
		memo_perm[n] = perm = list(permutations(range(n)))
	best_result_neg = 0
	best_result_pos = 0
	# print("Case")
	for p in perm:
		g = copy.deepcopy(grid)
		result = game(n, g, p)
		# print(f"{p}: {result}")
		# best_result = max(best_result, result)
		if result < 0:
			best_result_neg = min(best_result_neg, result)
		else:
			best_result_pos = max(best_result_pos, result)
	print(best_result_neg if best_result_neg < 0 else best_result_pos)


if __name__ == "__main__":
	t = int(input())
	for _ in range(t):
		test_case()
