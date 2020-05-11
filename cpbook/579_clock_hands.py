# UVa 579 - ClockHands
# https://onlinejudge.org/external/5/579.pdf

from sys import stdin


if __name__ == "__main__":
	for line in stdin:
		if line == "\n":
			continue
		h, m = [int(x) for x in line.split(":")]
		if h == m == 0:
			break
		ah = h / 12 * 360 + m / 60 * 30
		am = m / 60 * 360
		a = abs(ah - am)
		if a > 180:
			a = 360 - a
		print("{:.3f}".format(round(a, 3)))
