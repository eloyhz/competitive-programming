# TCArg 2020 - Contest #2
# PolandBall and Hypothesis
# https://codeforces.com/group/j1UosVRZar/contest/287504/problem/B

def build_sieve(n):
	is_prime = [True] * (n + 2)
	for x in range(2, n + 1):
		if not is_prime[x]:
			continue
		for u in range(2 * x, n + 1, x):
			is_prime[u] = False
	return is_prime

if __name__ == "__main__":
	is_prime = build_sieve(10 ** 6)
	n = int(input())
	m = 1
	while m <= 10 ** 3:
		num = n * m + 1
		if not is_prime[num]:
			print(m)
			break
		m += 1
