# UVa 10258 - Contest Scoreboard
# https://onlinejudge.org/external/102/10258.pdf

from operator import itemgetter

def test_case():
	incorrect = set()
	correct = set()
	scoreboard = {}
	while True:
		try:
			line = input()
		except EOFError:
			break
		if line == "":
			break
		c, p, t, l = line.split()
		contestant = int(c)
		problem = int(p)
		time = int(t)
		if contestant not in scoreboard:
			scoreboard[contestant] = [0, 0]
		if l == 'R' or l == 'U' or l == 'E':
			continue
		if l == 'I':
			incorrect.add((contestant, problem))
			continue
		if (contestant, problem) in correct:
			continue
		correct.add((contestant, problem))
		scoreboard[contestant][0] += 1
		scoreboard[contestant][1] += time
		if (contestant, problem) in incorrect:
			scoreboard[contestant][1] += 20
	arr = []
	for s in scoreboard:
		arr.append([s, scoreboard[s][0], scoreboard[s][1]])
	arr = sorted(arr, key=itemgetter(2, 0))
	result = {}	
	for a in arr:
		problems = a[1]
		if problems not in result:
			result[problems] = [a]
		else:
			result[problems].append(a)
	for p in range(9, -1, -1):
		if p not in result:
			continue
		contestants = result[p]
		for c in contestants:
			print(c[0], c[1], c[2])


	
if __name__ == "__main__":
	tc = int(input())
	input()
	for t in range(tc, 0, -1):
		test_case()
		if t > 1:
			print()

