# TCArg 2020 - Contest #4
# Depression
# https://codeforces.com/group/j1UosVRZar/contest/287848/problem/D

import math

if __name__ == "__main__":
	hours, minutes = [int(x) for x in input().split(':')]
	h12 = hours - 12 if hours >= 12 else hours
	angle_hours = h12 / 12 * 360 + minutes / 60 * 30
	angle_minutes = minutes / 60 * 360
	angle_hours = round(angle_hours, 9)
	angle_minutes = round(angle_minutes, 9)
	if angle_hours - math.trunc(angle_hours) > 0:
		print(f"{angle_hours} ", end="")
	else:
		print(f"{angle_hours:.0f} ", end="")
	if angle_minutes - math.trunc(angle_minutes) > 0:
		print(f"{angle_minutes} ", end="")
	else:
		print(f"{angle_minutes:.0f} ", end="")
