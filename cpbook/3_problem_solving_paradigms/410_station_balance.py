# UVa 410 - Station Balance
# https://onlinejudge.org/external/4/410.pdf

from sys import maxsize

def fill_chambers(sorted_specimens, average_mass):
	n = len(sorted_specimens)
	chambers = []
	imbalance = 0
	for i in range(n // 2):
		s1 = sorted_specimens[i]
		s2 = sorted_specimens[n - i - 1]
		chamber_mass = s1[0] + s2[0]
		imbalance += abs(chamber_mass - average_mass)
		if s1[1] < s2[1]:
			chambers.append((s1[1], s2[1]))
		else:
			chambers.append((s2[1], s1[1]))
	chambers.sort()
	return chambers, imbalance


def print_solution(t, specimens, chambers, imbalance):
	print(f"Set #{t}")
	for i, ch in enumerate(chambers):
		s1 = None if ch[0] == maxsize else specimens[ch[0]]
		s2 = None if ch[1] == maxsize else specimens[ch[1]]
		# print(f" {i}: {s1 if s1 != None else ''} {s2 if s2 != None else ''}")
		if s1 != None and s2 != None:
			print(f" {i}: {s1} {s2}")
		elif s1 == s2 == None:
			print(f" {i}:")
		elif s1 != None and s2 == None:
			print(f" {i}: {s1}")
	print(f"IMBALANCE = {imbalance:.5f}")


def test_case(c, s, t):
	specimens = [int(x) for x in input().split()]
	average_mass = sum(specimens) / c
	sorted_specimens = [(0, maxsize)] * (c * 2 - s)
	for i, spec in enumerate(specimens):
		sorted_specimens.append((spec, i))
	sorted_specimens.sort()
	chambers, imbalance = fill_chambers(sorted_specimens, average_mass)
	print_solution(t, specimens, chambers, imbalance)
		

if __name__ == "__main__":
	t = 0
	while True:
		try:
			line = input()
			if line == "":
				continue
		except EOFError:
			break
		c, s = [int(x) for x in line.split()]
		t += 1
		test_case(c, s, t)
		print()
