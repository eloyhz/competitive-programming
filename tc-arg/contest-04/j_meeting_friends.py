# TCArg 2020 - Contest #4
# The New Year: Meeting Friends
# https://codeforces.com/group/j1UosVRZar/contest/287848/problem/J

if __name__ == "__main__":
	x1, x2, x3 = [int(x) for x in input().split()]
	midpoint = (x1 + x2 + x3) // 3
	min_distance = abs(x1 - midpoint) + abs(x2 - midpoint) + abs(x3 - midpoint)
	print(min_distance)
