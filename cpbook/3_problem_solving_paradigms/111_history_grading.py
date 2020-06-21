# UVa 111 - History Grading
# https://onlinejudge.org/external/1/111.pdf

def longest_increasing_subsequence(array):
	n = len(array)
	length = [1] * n
	longest = 0
	for i in range(n):
		for j in range(i):
			if array[j] < array[i] and length[j] + 1 > length[i]:
				length[i] = length[j] + 1
		longest = max(longest, length[i])
	return longest


if __name__ == "__main__":
	while True:
		try:
			n = int(input())
			events = [int(x) for x in input().split()]
			order = {}
			for i, e in enumerate(events):
				order[e] = i
			print(f"events={events}")
			print(f"order={order}")
			print("---")
			for i in range(1, n):
				students = [int(x) for x in input().split()]
				array = []
				for s in students:
					array.append(order[s])
				print(f"students={students}")
				print(f"array={array}")
				print(longest_increasing_subsequence(array))
		except EOFError:
			break

