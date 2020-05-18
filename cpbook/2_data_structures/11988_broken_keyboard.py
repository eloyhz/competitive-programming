# UVa 11988 - Broken Keyboard
# https://onlinejudge.org/external/119/11988.pdf

import collections

def test_case(text):
	output = collections.deque()
	stack = collections.deque()
	text.strip('[]')
	left = False
	for c in text:
		if c == '[':
			while left and len(stack) > 0:
				e = stack.pop()
				output.appendleft(e)
			left = True
		elif c == ']':
			left = False
			while len(stack) > 0:
				e = stack.pop()
				output.appendleft(e)
		elif left:
			stack.append(c)
		else:
			output.append(c)
	while left and len(stack) > 0:
		e = stack.pop()
		output.appendleft(e)
	print(''.join(output))


if __name__ == "__main__":
	while True:
		try:
			line = input()
		except EOFError:
			break
		test_case(line)

