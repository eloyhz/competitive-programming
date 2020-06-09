# UVa 12405 - Scarecrow
# https://onlinejudge.org/external/124/12405.pdf


def minimum_scarecrows(n, field):
	result = 0
	i = 0
	while i < n:
		if field[i] == '.':
			result += 1
			i += 3
		else:
			i += 1
	return result

if __name__ == "__main__":
	tc = int(input())
	for t in range(tc):
		n = int(input())
		field = input()
		scarecrows = minimum_scarecrows(n, field)
		print(f"Case {t + 1}: {scarecrows}")

