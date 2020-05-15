# UVa 12455 - Bars
# https://onlinejudge.org/external/124/12455.pdf


def solve():
	n = int(input())	# length of the bar we want to obtain
	p = int(input())	# number of bars he have
	b = [int(x) for x in input().split()]	# length of the p bars
	for i in range(1 << p):		# generate 2^p subsets of b
		s = 0
		for j in range(p):
			if i & (1 << j):
				s += b[j]
		if s == n:
			print("YES")
			return
	print("NO")


if __name__ == "__main__":
	t = int(input())
	for _ in range(t):
		solve()
