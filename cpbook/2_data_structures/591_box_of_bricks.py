# UVa 591 - Box of Bricks
# https://onlinejudge.org/external/5/591.pdf


def calculate_moves(n):
	stacks = [int(x) for x in input().split()]
	height = sum(stacks) // n
	moves = 0
	for stack in stacks:
		if stack > height:
			moves += stack - height
	return moves
	

if __name__ == "__main__":
	s = 0
	while True:
		n = int(input())
		s += 1
		if n == 0:
			break
		print(f"Set #{s}")
		print(f"The minimum number of moves is {calculate_moves(n)}.")
		print()

