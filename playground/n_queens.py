# n-Queen problem positioned by row
# Reference:
# Algorithms, Jeff Erickson, 2019
# Page 73

count = 0

def can_place(q, r, j):
	for i in range(1, r):
		if q[i] == j or q[i] == j + r - i or q[i] == j - r + i:
			return False
	return True


def place_queens(q, r):
	global count
	if r == n + 1:
		count += 1
		q.pop(0)
		print(q)
	else:
		for j in range(1, n + 1):
			if can_place(q, r, j):
				q[r] = j
				place_queens(q[:], r + 1)


if __name__ == "__main__":
	n = 4
	queens = [0] * (n + 1)
	queens[1] = 2
	place_queens(queens, 1)
	print(count)

