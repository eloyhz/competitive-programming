# UVa 11100 - The Trip, 2007
# https://onlinejudge.org/external/111/11100.pdf


def calculate_repeated(bags):
	repeated = {}
	for b in bags:
		if b not in repeated:
			repeated[b] = 1
		else:
			repeated[b] += 1
	result = 0
	for k in repeated:
		result = max(result, repeated[k])
	return result

def calculate_minimum(n, bags):
	k = calculate_repeated(bags)
	pieces = []
	for _ in range(k):
		pieces.append([])
	bags.sort()
	# print(k, pieces, n, bags)
	for i in range(0, n, k):
		# print(f"i={i}")
		j = 0
		while j < k and i + j < n:
			# print(f"\tj={j}")
			pieces[j].append(bags[i + j])
			j += 1
	return k, pieces


if __name__ == "__main__":
	first_case = True
	while True:
		n = int(input())
		if n == 0:
			break
		if first_case:
			first_case = False
		else:
			print()		# empty line between cases
		bags = [int(b) for b in input().split()]
		k, pieces = calculate_minimum(n, bags)
		print(k)
		for piece in pieces:
			for i in range(len(piece) - 1):
				print(f"{piece[i]} ", end="")
			print(piece[-1])
