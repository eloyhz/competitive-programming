# UVa 12210 - A Match Making Problem
# https://onlinejudge.org/external/122/12210.pdf

def match(b, s, bachelors, spinsters):
	if b <= s:
		return 0, 0
	else:
		bachelors.sort()
		return b - s, bachelors[0] 


def match_tle(b, s, bachelors, spinsters):
	bachelors.sort(reverse=True)
	spinsters.sort(reverse=True)
	# print(b, bachelors)
	# print(s, spinsters)
	for j in range(b):
		if len(spinsters) == 0:
			break
		nearest = 0
		diff = abs(bachelors[j] - spinsters[nearest])
		for i in range(1, len(spinsters)):
			if abs(bachelors[j] - spinsters[i]) < diff:
				nearest = i
				diff = abs(bachelors[j] - spinsters[nearest])
		spinsters.pop(nearest)
		# print(spinsters)
	if j == b - 1:
		return 0, 0
	else:
		return b - j, bachelors[-1]
				

if __name__ == "__main__":
	tc = 0
	while True:
		b, s = [int(x) for x in input().split()]
		if b == s == 0:
			break
		tc += 1
		bachelors = []
		for _ in range(b):
			bachelors.append(int(input()))
		spinsters = []
		for _ in range(s):
			spinsters.append(int(input()))
		l, y = match(b, s, bachelors, spinsters)
		print(f"Case {tc}: {l}", end="")
		if l == 0:
			print()
		else:
			print(f" {y}")

