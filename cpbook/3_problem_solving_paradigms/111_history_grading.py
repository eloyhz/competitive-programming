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
			ranking = [int(x) for x in input().split()]
			events = [0] * n
			for i in range(n):
				events[ranking[i] - 1] = i + 1
			order = {}
			for i, e in enumerate(events):
				order[e] = i
			while True:
				ranking = [int(x) for x in input().split()]
				students = [0] * n
				for i in range(n):
					students[ranking[i] - 1] = i + 1
				array = []
				for s in students:
					array.append(order[s])
				print(longest_increasing_subsequence(array))
		except EOFError:
			break

