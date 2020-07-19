keyboard = {}

def build_keyboard():
	global keyboard
	row = 1
	col = 1
	for i in range(1, 27):
		keyboard[chr(ord('a') + i - 1)] = (row, col)
		col += 1
		if i % 9 == 0:
			row += 1
			col = 1

def are_neighbors(a, b):
	global keyboard
	dx = abs(keyboard[a][1] - keyboard[b][1]) 
	dy = abs(keyboard[a][0] - keyboard[b][0]) 
	if dx <= 1 and dy <= 1:
		return True
	else:
		return False

def are_similar(w1, w2):
	if len(w1) != len(w2):
		return False
	for a, b in zip(w1, w2):
		if not are_neighbors(a, b):
			return False
	return True

if __name__ == "__main__":
	build_keyboard()
	n = int(input())
	for _ in range(n):
		w1, w2 = input().split()
		if w1 == w2:
			print(1)
		elif are_similar(w1, w2):
			print(2)
		else:
			print(3)

