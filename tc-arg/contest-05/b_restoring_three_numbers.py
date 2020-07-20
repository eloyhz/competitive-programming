# TCArg 2020 - Contest #5
# Restoring Three Numbers
# https://codeforces.com/group/j1UosVRZar/contest/288184/problem/B

if __name__ == "__main__":
	x = [int(v) for v in input().split()]
	x.sort()
	for i in range(3):
		print(f"{x[3] - x[i]} ", end="")
	print()

