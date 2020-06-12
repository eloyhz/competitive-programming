# UVa 11900 - Boiled Eggs
# https://onlinejudge.org/external/119/11900.pdf

def solve(n, p, q, eggs):
	result = 0
	weight = 0
	count = 0
	for i in range(n):
		if count + 1 <= p and weight + eggs[i] <= q:
			weight += eggs[i]
			result += 1
			count += 1
		else:
			break
	return result


if __name__ == "__main__":
	tc = int(input())
	for t in range(tc):
		n, p, q = [int(x) for x in input().split()]
		eggs = [int(x) for x in input().split()]
		max_eggs = solve(n, p, q, eggs)
		print(f"Case {t + 1}: {max_eggs}")
