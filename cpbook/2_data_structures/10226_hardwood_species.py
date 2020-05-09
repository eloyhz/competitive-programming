# UVa 10226 - Hardwood Species
# https://onlinejudge.org/external/102/10226.pdf


if __name__ == "__main__":
	t = int(input())
	input()				# skip blank line
	for i in range(t):
		species = {}
		total = 0
		while True:
			try:
				s = input()
			except EOFError:
				break
			if s == "":
				break
			total += 1
			if s not in species:
				species[s] = 1
			else:
				species[s] += 1
		for s in sorted(species):
			print("{} {:.4f}".format(s, round(species[s] / total * 100, 4)))
		print()
