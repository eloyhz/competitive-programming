# Petya and Strings
# https://codeforces.com/contest/112/problem/A


if __name__ == '__main__':
	a = input().lower()
	b = input().lower()
	if a < b:
		print(-1)
	elif a > b:
		print(1)
	else:
		print(0)

