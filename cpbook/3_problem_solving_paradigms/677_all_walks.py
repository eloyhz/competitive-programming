# UVa 677 - All Walks of length n from the first node
# https://onlinejudge.org/external/6/677.pdf

graph = []
walk = [1]
walks = 0

def backtrack(node, n, length):
	global walks
	if len(walk) == length + 1:
		walks += 1
		print("(", end="")
		for i in range(length + 1):
			print(walk[i], end="")
			if i < length:
				print(",", end="")
		print(")")
		return
	for i in range(n):
		# if i == k or i == 0:
		#	continue
		if graph[node][i] == 1 and (i + 1) not in walk:
			walk.append(i + 1)
			backtrack(i, n, length)
			walk.pop()


def test_case():
	global graph, walks
	number_of_nodes, length_of_walks = [int(x) for x in input().split()]
	graph = []
	walks = 0
	for _ in range(number_of_nodes):
		row = [int(x) for x in input().split()]
		graph.append(row)
	backtrack(0, number_of_nodes, length_of_walks)
	if walks == 0:
		print("no walk of length", length_of_walks)


if __name__ == "__main__":
	while True:
		test_case()
		try:
			eof = int(input())
		except EOFError:
			break
		except ValueError:
			break
		print()

