# Theatre Square
# https://codeforces.com/group/j1UosVRZar/contest/287018/problem/B

def calculate_size(theatre_size, flagstone_size):
	if flagstone_size >= theatre_size:
		size = 1
	elif theatre_size % flagstone_size == 0:
		size = theatre_size // flagstone_size
	else:
		size = theatre_size // flagstone_size + 1
	return size

if __name__ == "__main__":
	n, m, a = [int(x) for x in input().split()]
	height = calculate_size(n, a)
	width = calculate_size(m, a)
	print(height * width)
