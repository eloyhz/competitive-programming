# Is your horseshoe on the other hoof?
# https://codeforces.com/contest/228/problem/A


from collections import Counter

if __name__ == '__main__':
	s = [int(x) for x in input().split()]
	c = Counter(s)
	print(4 - len(c))

