# Black Square
# https://codeforces.com/contest/431/problem/A


if __name__ == '__main__':
	a = [int(x) for x in input().split()]
	s = input()
	calories = 0
	for i in range(len(s)):
		calories += a[int(s[i]) - 1]
	print(calories)
