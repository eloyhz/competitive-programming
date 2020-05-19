# UVa 11242 - Tour de France
# https://onlinejudge.org/external/112/11242.pdf

def test_case():
	fa = [int(x) for x in input().split()]
	ra = [int(x) for x in input().split()]
	ratios = []
	for n in ra:
		for m in fa:
			ratios.append(n / m)
	ratios.sort()
	spread = 0
	for i in range(len(ratios) - 1):
		spread = max(spread, ratios[i + 1] / ratios[i])
	print("{:.2f}".format(spread, 2))


if __name__ == "__main__":
	while True:
		fr = [int(x) for x in input().split()]
		if fr[0] == 0:
			break
		test_case()

