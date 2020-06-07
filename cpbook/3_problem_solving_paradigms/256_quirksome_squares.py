# UVa 256 - Quirksome Squares
# https://onlinejudge.org/external/2/256.pdf

table = {2: [0, 1, 81], 4: [0, 1, 2025, 3025, 9801], \
		6: [0, 1, 88209, 494209, 998001], \
		8: [0, 1, 4941729, 7441984, 24502500, 25502500, 52881984, \
		60481729, 99980001]}

if __name__ == "__main__":
	while True:
		try:
			n = int(input())
		except EOFError:
			break
		for quirk in table[n]:
			print(f"{quirk:0{n}d}")


def calculate(n):
	h = n // 2
	m = 10 ** h
	for i in range(m):
		for j in range(m):
			num = (i + j) ** 2
			quirk = int(f"{i:0{h}}{j:0{h}}")
			if num == quirk:
				print(f"{num:0{n}d}")

