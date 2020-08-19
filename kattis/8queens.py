# Kattis - Eight Queens
# https://open.kattis.com/problems/8queens


def check_horizontal(board):
	for i in range(8):
		count = 0
		for j in range(8):
			if board[i][j] == '*':
				count += 1
		if count > 1:
			return False
	return True


def check_vertical(board):
	for j in range(8):
		count = 0
		for i in range(8):
			if board[i][j] == '*':
				count += 1
		if count > 1:
			return False
	return True


def check_diagonal1(board):
	for i in range(8):
		row = i
		col = 0
		count = 0
		while row >= 0:
			if board[row][col] == '*':
				count += 1
			row -= 1
			col += 1
		if count > 1:
			return False
	for i in range(1, 8):
		row = i
		col = 7
		count = 0
		while row < 8:
			if board[row][col] == '*':
				count += 1
			row += 1
			col -= 1
		if count > 1:
			return False
	return True


def check_diagonal2(board):
	for j in range(8):
		row = 7
		col = j
		count = 0
		while col >= 0:
			if board[row][col] == '*':
				count += 1
			row -= 1
			col -= 1
		if count > 1:
			return False
	for j in range(1, 8):
		row = 0
		col = j
		count = 0
		while col < 8:
			if board[row][col] == '*':
				count += 1
			row += 1
			col += 1
		if count > 1:
			return False
	return True 

def check_8queens(board):
	count = 0
	for i in range(8):
		for j in range(8):
			if board[i][j] == '*':
				count += 1
	if count == 8:
		return True
	else:
		return False

def is_valid(board):
	return True if check_horizontal(board) and check_vertical(board) and\
					check_diagonal1(board) and check_diagonal2(board) and check_8queens(board) else False 
		

if __name__ == "__main__":
	board = []
	for _ in range(8):
		row = input()
		board.append(row)
	if is_valid(board):
		print('valid')
	else:
		print('invalid')
