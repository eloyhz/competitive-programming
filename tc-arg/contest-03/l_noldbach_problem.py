# TCArg 2020 - Contest #3
# Noldbach problem
# https://codeforces.com/group/j1UosVRZar/contest/287739/problem/L

def build_sieve(n):
	is_prime = [True] * (n + 2)
	for x in range(2, n + 1):
		if not is_prime[x]:
			continue
		for u in range(2 * x, n + 1, x):
			is_prime[u] = False
	return is_prime

if __name__ == "__main__":
	n, k = [int(x) for x in input().split()]
	is_prime = build_sieve(n)
	primes = []
	for i in range(2, n + 1):
		if is_prime[i]:
			primes.append(i)
	counter = 0
	for i in range(len(primes) - 1):
		noldbach = primes[i] + primes[i + 1] + 1
		if noldbach > n:
			break
		if is_prime[noldbach]:
			counter += 1
	if counter >= k:
		print("YES")
	else:
		print("NO")


