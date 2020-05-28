# UVa 11085 - Back to the 8-Queens
# https://onlinejudge.org/external/110/11085.pdf

from sys import maxsize

row = [0] * 8
result = []

def place(r, c):
	for prev in range(c):
		if row[prev] == r or abs(row[prev] - r) == abs(prev - c):
			return False
	return True


def backtrack(c):
	if c == 8:
		result.append(row[:])
		return
	for r in range(8):
		if place(r, c):
			row[c] = r
			backtrack(c + 1)


def test_case(tc, row):
	moves = maxsize
	for r in result:
		diff = 0
		for i in range(8):
			if row[i] != r[i]:
				diff += 1
		moves = min(moves, diff)
	print(f"Case {tc}: {moves}")


if __name__ == "__main__":
	backtrack(0)
	tc = 0
	while True:
		tc += 1
		try:
			row = [int(x) - 1 for x in input().split()]
		except EOFError:
			break
		test_case(tc, row)

