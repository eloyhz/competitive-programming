# UVa 12032 - The Monkey and the Oiled Bamboo
# https://onlinejudge.org/external/120/12032.pdf

def can_reach(rungs, k):
	prev_r = 0
	for r in rungs:
		jump, prev_r = r - prev_r, r
		if jump == k:
			k -= 1
		elif jump > k:
			return False
	return True

def test_case(rungs):
	lo = 1
	hi = 10 ** 7
	while abs(hi - lo) > 1:
		mid = lo + (hi - lo) // 2
		if can_reach(rungs, mid):
			hi = mid
		else:
			lo = mid
	return lo if can_reach(rungs, lo) else hi


if __name__ == "__main__":
	tc = int(input())
	for t in range(tc):
		n = int(input())
		rungs = [int(x) for x in input().split()]
		jumps = test_case(rungs)
		print(f"Case {t + 1}: {jumps}")
	