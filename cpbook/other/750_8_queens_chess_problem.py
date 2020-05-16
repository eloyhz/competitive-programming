# UVa 750 - 8 Queens Chess Problem
# https://onlinejudge.org/external/7/750.pdf

row = [0] * 8
a, b, line_counter = 0, 0, 0


def place(r, c):
	for prev in range(c):
		if row[prev] == r or abs(row[prev] - r) == abs(prev - c):
			return False
	return True


def backtrack(c):
	global row, a, b, line_counter
	if c == 8 and row[b] == a:
		line_counter += 1
		print("{:2d}      {:d}".format(line_counter, row[0] + 1), end="")
		for j in range(1, 8):
			print("", row[j] + 1, end="")
		print()
		return
	for r in range(8):
		if place(r, c):
			row[c] = r
			backtrack(c + 1)


def solve():
	global row, a, b, line_counter
	print("SOLN       COLUMN")
	print(" #      1 2 3 4 5 6 7 8")
	print()
	row = [0] * 8
	line_counter = 0
	a, b = [int(x) for x in input().split()]
	a -= 1
	b -= 1
	backtrack(0)


if __name__ == "__main__":
	tests = int(input())
	for t in range(tests, 0, -1):
		try:
			input()
		except EOFError:
			break
		solve()
		if t > 1:
			print()
