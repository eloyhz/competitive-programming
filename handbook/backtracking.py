# A backtracking algorithm begins with an empty solution and extends the
# solution step by step. The search recusively goes through all different
# ways ho a solution can be constructed.

# As an example consider the problem of calculating the number of ways n
# queens can be placed on an n x n chessboard so that no two queens attack
# each other.

# The problem can be solved using backtracking by placing queens to the board
# row by row. More precisely, exactly one queen will be placed in each row so
# that no queen attacks any of the queens placed before. A solution has been
# found when all n queens have been placed on the board.

# Reference: Competitive Programmer's Handbook. p. 50

n = 4
count = 0
column = [False] * n
diag1 = [False] * n
diag2 = [False] * n


def search(y):
	global count
	if y == n:
		count += 1
		return
	for x in range(n):
		if column[x]:
			continue
		if diag1[x + y]:
			continue
		if diag2[x - y + n - 1]:
			continue
		column[x] = diag1[x + y] = diag2[x - y + n - 1] = True
		search(y + 1)
		column[x] = diag1[x + y] = diag2[x - y + n - 1] = False


if __name__ == "__main__":
	search(0)
	print(count)
