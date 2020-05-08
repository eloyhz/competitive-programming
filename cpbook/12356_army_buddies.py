# UVa 12356 - Army buddies
# https://onlinejudge.org/external/123/12356.pdf

if __name__ == "__main__":
	while True:
		s, b = [int(x) for x in input().split()]
		if s == b == 0:
			break
		soldiers = [True for _ in range(s + 1)]
		soldiers[0] = None
		for _ in range(b):
			l, r = [int(x) for x in input().split()]
			for i in range(l, r + 1):
				soldiers[i] = False
			left_neighbor = "*"
			for i in range(l, 0, -1):
				if soldiers[i]:
					left_neighbor = i
					break
			right_neighbor = "*"
			for i in range(r + 1, s + 1):
				if soldiers[i]:
					right_neighbor = i
					break
			print(left_neighbor, right_neighbor)
		print("-")

