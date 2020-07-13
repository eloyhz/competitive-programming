# Alice, Bob and Chocolate
# https://codeforces.com/group/j1UosVRZar/contest/287327/problem/E

from collections import deque

def play(choco):
	choco = deque(choco)
	alice = a = 0
	bob = b = 0
	while True:
		if len(choco) == 0:
			break
		elif alice == 0:
			alice = choco.popleft()
			a += 1
		if len(choco) == 0:
			break
		elif bob == 0:
			bob = choco.pop()
			b += 1
		alice -= 1
		bob -= 1
	return a, b
		

if __name__ == "__main__":
	n = int(input())
	choco = [int(x) for x in input().split()]
	a, b = play(choco)
	print(a, b)

