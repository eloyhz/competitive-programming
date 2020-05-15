# UVa 11565 - Simple Equations
# https://onlinejudge.org/external/115/11565.pdf


def solve_tle():
	a, b, c = [int(i) for i in input().split()]
	for x in range(-100, 101):
		for y in range(-100, 101):
			for z in range(-100, 101):
				if x == y or x == z or y == z:
					continue
				if x + y + z != a:
					continue
				if x * y * z != b:
					continue
				if x * x + y * y + z * z != c:
					continue
				print(x, y, z)
				return True
	return False


def solve():
	a, b, c = [int(i) for i in input().split()]
	for x in range(-22, 23):
		if x * x > c:
			continue
		for y in range(-100, 101):
			if y == x:
				continue
			if x * x + y * y > c:
				continue
			for z in range(-100, 101):
				if x == y or x == z or y == z:
					continue
				if x + y + z != a:
					continue
				if x * y * z != b:
					continue
				if x * x + y * y + z * z != c:
					continue
				print(x, y, z)
				return True
	return False


if __name__ == "__main__":
	t = int(input())
	for _ in range(t):
		if not solve():
			print("No solution.")
