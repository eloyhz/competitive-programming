# UVa 10567 - Helping Fill Bates
# https://onlinejudge.org/external/105/10567.pdf
# Reference #1: https://www.redgreencode.com/coding-style-competitive-programming-uva-10567/
# Reference #2: https://saicheems.wordpress.com/2013/07/10/uva-10567-helping-fill-bates/

import bisect

if __name__ == "__main__":
	candidates = {}
	for i, c in enumerate(input()):
		if c not in candidates:
			candidates[c] = [i]
		else:
			candidates[c].append(i)
	for k in candidates:
		candidates[k].sort()
	q = int(input())
	for _ in range(q):
		matched = True
		first_candidate = 0
		last_candidate = -1
		for i, c in enumerate(input()):
			s = ord(c) - (ord('A') if str.isupper(c) else ord('a'))
			if c not in candidates:
				matched = False
				break
			last_index = bisect.bisect(candidates[c], last_candidate)
			if last_index == len(candidates[c]):
				matched = False
				break
			last_candidate = candidates[c][last_index]
			if i == 0:
				first_candidate = last_candidate
		print(f"Matched {first_candidate} {last_candidate}" if matched else "Not matched")



def firt_attempt():
	candidates = {}
	for i, c in enumerate(input()):
		if c not in candidates:
			candidates[c] = [i]
		else:
			candidates[c].append(i)
	for k in candidates:
		candidates[k].sort()
	q = int(input())
	for _ in range(q):
		state = [0] * 52
		match = []
		matched = True
		for c in input():
			s = ord(c) - (ord('A') if str.isupper(c) else ord('a'))
			# print(c, s, state[s], candidates[c], len(candidates[c]))
			if c not in candidates:
				print("hey")
				continue
			if state[s] >= len(candidates[c]) or \
				(len(match) > 0 and candidates[c][state[s]] < match[-1]):
				matched = False
				break
			match.append(candidates[c][state[s]])
			state[s] += 1
		print(f"Matched {match[0]} {match[-1]}" if matched else "Not matched")

