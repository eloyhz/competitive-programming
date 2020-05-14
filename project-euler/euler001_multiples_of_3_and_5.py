#!/bin/python3
# Project Euler #1: Multiples of 3 and 5
# https://projecteuler.net/problem=1
# https://www.hackerrank.com/contests/projecteuler/challenges/euler001/problem

import sys

def euler001_tle():
	t = int(input().strip())
	for _ in range(t):
		n = int(input().strip())
		sum = 0
		for i in range(1, n):
			if i % 3 == 0 or i % 5 == 0:
				sum += i
		print(sum)


def euler001_ac():
	t = int(input().strip())
	for _ in range(t):
		n = int(input().strip())
		if n % 3 == 0:
			k1 = n // 3 - 1
		else:
			k1 = n // 3
		if n % 5 == 0:
			k2 = n // 5 - 1
		else:
			k2 = n // 5
		if n % 15 == 0:
			k3 = n // 15 - 1
		else:
			k3 = n // 15
		s1 = k1 * (k1 + 1) // 2
		s2 = k2 * (k2 + 1) // 2
		s3 = k3 * (k3 + 1) // 2
		result = 3 * s1 + 5 * s2 - 15 * s3
		print(result)


if __name__ == "__main__":
	euler001_ac()
