# Codeforces Round #640 (Div. 4)
# B. Same Parity Summands
# https://codeforces.com/contest/1352/problem/B

if __name__ == "__main__":
	t = int(input())
	for _ in range(t):
		n, k = [int(x) for x in input().split()]
		r = n - k + 1
		e = n - 2 * k + 2
		if r > 0 and r % 2 != 0:
			print("YES")
			for _ in range(k - 1):
				print("1 ", end="")
			print(r)
		elif e > 0 and e % 2 == 0:
			print("YES")
			for _ in range(k - 1):
				print("2 ", end="")
			print(e)
		else:
			print("NO")

