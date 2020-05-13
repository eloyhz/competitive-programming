# UVa 11459 - Snakes and Ladders
# https://onlinejudge.org/external/114/11459.pdf

if __name__ == "__main__":
	t = int(input())
	for _ in range(t):
		a, b, c = [int(x) for x in input().split()]
		sl = {}  # snakes or ladders
		for _ in range(b):
			x, y = [int(s) for s in input().split()]
			sl[x] = y
		players = [1] * a
		p = 0
		won = False
		for _ in range(c):
			d = int(input())
			if won: 
				continue
			players[p] += d
			if players[p] in sl:	# snake or ladder
				players[p] = sl[players[p]]
			if players[p] >= 100:
				won = True
			p = (p + 1) % a
		for i in range(len(players)):
			print("Position of player", i + 1, "is", players[i], end="")
			print(".")

