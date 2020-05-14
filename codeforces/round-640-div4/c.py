# Codeforces Round #640 (Div. 4)
# C. K-th Not Divisible by n
# https://codeforces.com/contest/1352/problem/C

if __name__ == "__main__":
	t = int(input())
	for _ in range(t):
		n, k = [int(x) for x in input().split()]
		print(k + (k - 1) // (n - 1))
