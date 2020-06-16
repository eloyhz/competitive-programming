# UVa 787 - Maximum Sub-sequence Product
# https://onlinejudge.org/external/7/787.pdf


def get_sequence():
	sequence = []
	finished = False
	while not finished:
		try:
			line = input()
		except EOFError:
			break
		if line == "":
			continue
		seq = [int(x) for x in line.split()]
		if seq[-1] == -999999:
			seq.pop()
			finished = True
		sequence += seq
	return sequence


def maximum_sub_product(sequence):
	n = len(sequence)
	best = -999999
	for i in range(n):
		p = 1
		for j in range(i, n):
			p *= sequence[j]
			best = max(best, p)
	return best



if __name__ == "__main__":
	while True:
		sequence = get_sequence()
		if len(sequence) == 0:
			break
		maxsp = maximum_sub_product(sequence)
		print(maxsp)
