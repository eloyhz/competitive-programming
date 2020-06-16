# UVa 10684 - The jackpot
# https://onlinejudge.org/external/106/10684.pdf


def get_bets(n):
	i = 0
	bets = []
	while i < n:
		line = input()
		if line == "":
			continue
		seq = [int(s) for s in line.split()]
		i += len(seq)
		bets += seq
	return bets


def maximum_streak(n, bets):
	s = a = 0
	for i in range(n):
		s += bets[i]
		a = max(a, s)
		if s < 0:
			s = 0
	return a


if __name__ == "__main__":
	while True:
		try:
			line = input()
		except EOFError:
			break
		if line == "":
			continue
		n = int(line)
		if n == 0:
			break
		bets = get_bets(n)
		streak = maximum_streak(n, bets)
		if streak > 0:
			print(f"The maximum winning streak is {streak}.")
		else:
			print("Losing streak.")

