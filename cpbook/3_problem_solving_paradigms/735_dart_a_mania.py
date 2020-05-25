# UVa 735 - Dart-a-Mania
# https://onlinejudge.org/external/7/735.pdf

def test_case(score):
	count = 0
	s = set()
	t = set()
	s.add(50)
	n = 20
	for i in [1, 2, 3]:
		for j in range(0, (n + 1) * i, i):
			s.add(j)
	for x in s:
		for y in s:
			for z in s:
				if x + y + z == score:
					t.add((1 << x) | (1 << y) | (1 << z))
					count += 1
	if len(t) == 0 and count == 0:
		print("THE SCORE OF", score, "CANNOT BE MADE WITH THREE DARTS.")
	else:
		print("NUMBER OF COMBINATIONS THAT SCORES ", score, " IS ", len(t), ".", sep="")
		print("NUMBER OF PERMUTATIONS THAT SCORES ", score, " IS ", count, ".", sep="")
	for i in range(70):
		print("*", end="")
	print()


if __name__ == "__main__":
	while True:
		score = int(input())
		if score <= 0:
			break
		test_case(score)
	print("END OF OUTPUT")

