# Codeforces Round #656 (Div. 3) - 2020-07-17
# B. Restore the Permutation by Merger
# https://codeforces.com/contest/1385/problem/B

def restore_permutation(array):
	n = len(array) // 2
	found = [False] * n
	for num in array:
		if found[num - 1]:
			continue
		found[num - 1] = True
		print(f"{num} ", end="")
	print()

if __name__ == "__main__":
	t = int(input())
	for _ in range(t):
		n = int(input())
		array = [int(x) for x in input().split()]
		restore_permutation(array)


