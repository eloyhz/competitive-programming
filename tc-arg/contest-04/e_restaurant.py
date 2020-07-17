# TCArg 2020 - Contest #4
# Restaurant
# https://codeforces.com/group/j1UosVRZar/contest/287848/problem/E

if __name__ == "__main__":
	n = int(input())
	events = []
	for _ in range(n):
		start, finish = [int(x) for x in input().split()]
		events.append((finish, start))
	events.sort()
	counter = 1
	current_finish = events[0][0]
	for i in range(1, n):
		if events[i][1] > current_finish:
			current_finish = events[i][0]
			counter += 1
	print(counter)

