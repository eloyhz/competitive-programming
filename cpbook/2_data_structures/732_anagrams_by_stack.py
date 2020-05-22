# UVa 732 - Anagrams by Stack
# https://onlinejudge.org/external/7/732.pdf

import time

result = []
solution = []
n = 0

def are_anagrams(s1, s2):
	if len(s1) != len(s2):
		return False
	if sorted(s1) != sorted(s2):
		return False
	return True


def is_valid(source, target):
	stack = []
	r = []
	s = list(source)
	for op in solution:
		if op == 'i': 	# push
			if len(s) == 0:
				return False
			stack.append(s.pop(0))
		elif op == 'o':	# pop
			if len(stack) == 0:
				return False
			r.append(stack.pop())
	if target == ''.join(r):
		return True


def generate(k, s, t, i, o):
	global solution, result, n
	if o > i or i > n: return
	if k == n * 2:
		if is_valid(s, t):
			result.append(' '.join(solution))
	else:
		solution.append('i')
		generate(k + 1, s, t, i + 1, o)
		solution.pop()
		solution.append('o')
		generate(k + 1, s, t, i, o + 1)
		solution.pop()


def test_case(s, t):
	global solution, n, result
	
	if not are_anagrams(s, t):
		print("[")
		print("]")
		return
	n = len(s)
	result = []
	solution = ['i']
	generate(1, s, t, 1, 0)
	result.sort()
	print("[")
	for r in result:
		print(r)
	print("]")


if __name__ == "__main__":
	# start_time = time.time()
	while True:
		source = target = ""
		try:
			while source == "":
				source = input()
			while target == "":
				target = input()
		except EOFError:
			break
		test_case(source, target)
	# print("--- %s seconds ---" % (time.time() - start_time))

