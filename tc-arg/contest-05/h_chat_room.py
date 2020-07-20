# TCArg 2020 - Contest #5
# Chat room
# https://codeforces.com/group/j1UosVRZar/contest/288184/problem/H

if __name__ == "__main__":
	s = input()
	hello = list("olleh")
	curr = hello.pop()
	found = False
	for c in s:
		if c == curr:
			if hello:
				curr = hello.pop()
			else:
				found = True
				break
	print("YES" if found else "NO")

