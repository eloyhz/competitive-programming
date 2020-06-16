# UVa 507 - Jill Rides Again
# https://onlinejudge.org/external/5/507.pdf

def niceness_route(stops):
	s = a = 0
	n = len(stops)
	start = end = 0
	best_start = best_end = 0
	for i in range(n):
		s += stops[i]
		if s > a:
			best_start = start
			best_end = i
			a = s
		elif s == a and i - start > best_end - best_start:
			best_start = start
			best_end = i
		if s < 0:
			s = 0
			start = i + 1
	if a == 0:
		return -1, -1
	else:
		return best_start + 1, best_end + 2

if __name__ == "__main__":
	routes = int(input())
	for r in range(routes):
		s = int(input())
		stops = []
		for _ in range(s - 1):
			stops.append(int(input()))
		i, j = niceness_route(stops)
		if i == j == -1:
			print(f"Route {r + 1} has no nice parts")
		else:
			print(f"The nicest part of route {r + 1} is between stops {i} and {j}")

