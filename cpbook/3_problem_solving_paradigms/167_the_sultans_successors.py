# UVa 167 - The Sultan’s Successors
# https://onlinejudge.org/external/1/167.pdf

queens = []

def place_queens(q, row):
	if row == 8:
		queens.append(q)
		return
	for col in range(8):
		legal = True
		for i in range(row):
			# if q[i] == col or q[i] == col + row - i or q[i] == col - row + i:
			if q[i] == col or abs(i - row) == abs(q[i] - col):
				legal = False
		if legal:
			q[row] = col
			place_queens(q[:], row + 1)


def test_case():
	board = []
	for i in range(8):
		row = [int(x) for x in input().split()]
		board.append(row)
	best = 0
	for q in queens:
		s = 0
		for row in range(8):
			col = q[row]
			s += board[row][col]
		best = max(best, s)
	return best


if __name__ == "__main__":
	place_queens([None] * 8, 0)
	k = int(input())
	for _ in range(k):
		highest_score = test_case()
		print(f"{highest_score:5}")

