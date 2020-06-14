# Sum of Two Values
# https://cses.fi/problemset/task/1640/

def solve_tle(n, x, values):
	found = False
	for i in range(n):
		for j in range(i + 1, n):
			if values[i] + values[j] == x:
				print(i + 1, j + 1)
				found = True
				break
		if found:
			break
	if not found:
		print("IMPOSSIBLE")


def solve_bsearch_tle(n, x, values):
	numbers = []
	for i in range(n):
		numbers.append((values[i], i + 1))
	numbers.sort()
	for i in range(n):
		y = x - numbers[i][0]
		lo, hi = 0, n - 1
		while lo <= hi:
			mid = lo + (hi - lo) // 2
			# print(f"mid={mid}, num[mid]={numbers[mid][0]}")
			if numbers[mid][0] == y and mid != i:
				print(numbers[i][1], numbers[mid][1])
				return
			elif y < numbers[mid][0]:
				hi = mid - 1
			else:
				lo = mid + 1
	print("IMPOSSIBLE")


def solve(n, x, values):
	mp = {}
	for i in range(n):
		a = values[i]
		if x - a in mp:
			print(mp[x - a] + 1, i + 1)
			return
		mp[a] = i
	print("IMPOSSIBLE")


if __name__ == "__main__":
	n, x = [int(v) for v in input().split()]
	values = [int(v) for v in input().split()]
	solve(n, x, values)

	
