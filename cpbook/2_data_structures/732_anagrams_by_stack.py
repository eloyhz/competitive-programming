# UVa 732 - Anagrams by Stack
# https://onlinejudge.org/external/7/732.pdf

import time

source = target = ""
n = 0

def are_anagrams():
	if len(source) != len(target):
		return False
	if sorted(source) != sorted(target):
		return False
	return True


def build_path(path, st, next_op, ci, co, i, o):
	path.append(next_op)
	if next_op == 'i':
		i += 1
		if ci == n:
			return
		st.append(source[ci])
		ci += 1
	else:
		o += 1
		if len(st) == 0:
			return
		if st.pop() != target[co]:
			return
		co += 1
	if len(path) == n * 2:
		print(' '.join(path))
	else:
		if i < n:
			build_path(path[:], st[:], 'i', ci, co, i, o)
		if o < n:
			build_path(path[:], st[:], 'o', ci, co, i, o)


def test_case():
	global n
	if not are_anagrams():
		print("[")
		print("]")
		return
	n = len(source)
	print("[")
	build_path([], [], 'i', 0, 0, 0, 0)
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
		test_case()
	# print("--- %s seconds ---" % (time.time() - start_time))

