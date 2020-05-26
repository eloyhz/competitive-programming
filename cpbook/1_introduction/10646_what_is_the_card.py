# UVa 10646 - What is the Card?
# https://onlinejudge.org/external/106/10646.pdf

def test_case(tc):
	cards = [x for x in input().split()]
	pile = []
	for c in cards:
		pile.append(c)
	top25 = []
	for _ in range(25):
		top25.append(pile.pop())
	y = 0
	for _ in [1, 2, 3]:
		top = pile.pop()
		if top[0].isdigit():
			x = ord(top[0]) - ord('0')
		else:
			x = 10
		y += x
		for _ in range(10 - x):
			pile.pop()
	while len(top25) > 0:
		pile.append(top25.pop())
	print(f"Case {tc}: {pile[y - 1]}")
		

if __name__ == "__main__":
	n = int(input())
	for t in range(n):
		test_case(t + 1)

