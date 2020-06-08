# UVa 11292 - The Dragon of Loowater
# https://onlinejudge.org/external/112/11292.pdf

def slay_the_dragon(n, m):
	heads = []
	for _ in range(n):
		heads.append(int(input()))
	knights = []
	for _ in range(m):
		knights.append(int(input()))
	heads.sort(reverse=True)
	knights.sort()
	k = 0
	coins = 0
	while k < len(knights):
		if len(heads) > 0 and knights[k] >= heads[-1]:
			coins += knights[k]
			heads.pop()
		k += 1
	return coins if len(heads) == 0 else 0


if __name__ == "__main__":
	while True:
		n, m = [int(x) for x in input().split()]
		if n == m == 0:
			break
		coins_to_pay = slay_the_dragon(n, m)
		if coins_to_pay == 0:
			print("Loowater is doomed!")
		else:
			print(coins_to_pay)
