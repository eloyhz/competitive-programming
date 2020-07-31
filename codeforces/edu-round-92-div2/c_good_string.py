# Educational Codeforces Round 92
# C. Good String
# https://codeforces.com/contest/1389/problem/C

def is_good(a):
	return a[1:] + a[0] == a[-1] + a[:-1]

def make_it_good(s):
	if is_good(s):
		return 0
	else:
		digits = [0] * 10
		for c in s:
			d = ord(c) - ord('0')
			digits[d] += 1
		eq = 0
		for i in range(10):
			eq = max(eq, digits[i])
		if eq == 1:
			return len(s) - 2
		else:
			return len(s) - eq


if __name__ == "__main__":
	t = int(input())
	for _ in range(t):
		s = input()
		ans = make_it_good(s)
		print(ans)

