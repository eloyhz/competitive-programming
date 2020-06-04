# UVa 10567 - Helping Fill Bates
# https://onlinejudge.org/external/105/10567.pdf

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

