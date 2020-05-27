# UVa 1062 - Containers
# https://onlinejudge.org/external/10/1062.pdf


def test_case(tc, containers):
	stacks = []
	for c in containers:
		stack = None
		for s in stacks:
			if c <= s[-1]:
				stack = s
				break
		if stack is None:
			stacks.append([c])
		else:
			stack.append(c)
	print(f"Case {tc}: {len(stacks)}")
				

if __name__ == "__main__":
	tc = 0
	while True:
		tc += 1
		containers = input()
		if containers == "end":
			break
		test_case(tc, containers)
		
