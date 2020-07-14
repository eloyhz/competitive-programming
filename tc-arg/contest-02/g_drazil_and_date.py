# TCArg 2020 - Contest #2
# Drazil and Date
# https://codeforces.com/group/j1UosVRZar/contest/287504/problem/G

if __name__ == "__main__":
	a, b, s = [int(x) for x in input().split()]
	t = abs(a) + abs(b) - s
	if t == 0:
		print("Yes")
	elif t > 0:
		print("No")
	else:
		if (a + b) % 2 == 0 and s % 2 == 0:
			print("Yes")
		elif (a + b) % 2 != 0 and s % 2 != 0:
			print("Yes")
		else:
			print("No")

