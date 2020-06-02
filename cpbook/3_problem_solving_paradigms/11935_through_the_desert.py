# UVa 11935 - Through the Desert
# https://onlinejudge.org/external/119/11935.pdf

import math

EPS = 1e-9

def can_arrive(events, litres):
	leaks = 0
	fuel = litres
	prev_expend = 0
	fuel_consumption = events[0][2]
	lt_km = fuel_consumption / 100
	for i in range(1, len(events)):
		expend = events[i][0] - prev_expend
		fuel -= lt_km * expend
		fuel -= expend * leaks
		if fuel < 0:
			return False
		prev_expend = events[i][0]
		if events[i][1] == "Leak":
			leaks += 1
		elif events[i][1] == "Mechanic":
			leaks = 0
		elif events[i][1] == "Gas":
			fuel = litres
		elif events[i][1] == "Fuel":
			fuel_consumption = events[i][2]
			lt_km = fuel_consumption / 100
	return True if fuel >= 0 else False


def test_case(events):
	lo = 0.000
	hi = 10000.000
	while math.fabs(hi - lo) > EPS:
		mid = (hi + lo) / 2
		if can_arrive(events, mid):
			answer = mid
			hi = mid
		else:
			lo = mid
	print(f"{answer:.3f}")


if __name__ == "__main__":
	end = False
	while not end:
		events = []
		while True:
			line = input().split()
			d = int(line[0])
			event = line[1]
			if event == "Fuel":
				n = int(line[3])
				if n == 0:
					end = True
					break
				events.append((d, "Fuel", n))
			else:
				events.append((d, event))
				if event == "Goal":
					break
		if not end:
			test_case(events)
