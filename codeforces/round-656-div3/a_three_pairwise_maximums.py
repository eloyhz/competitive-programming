# Codeforces Round #656 (Div. 3) - 2020-07-17
# A. Three Pairwise MaximumsA. Three Pairwise Maximums
# https://codeforces.com/contest/1385/problem/A

def solve(x, y, z):
	if x == y == z:
		print("YES")
		print(x, y, z)
	elif x != y and x != z and y != z:
		print("NO")
	else:
		array = [x, y, z]
		array.sort()
		if array[0] == array[1]:
			print("NO")
		else:
			print("YES")
			print(array[2], array[0], 1)

if __name__ == "__main__":
	t = int(input())
	for _ in range(t):
		x, y, z = [int(x) for x in input().split()]
		solve(x, y, z)


