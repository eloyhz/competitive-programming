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

if __name__ == "__main__":
	backtrack(0)
	print(result)
	print(len(result))
