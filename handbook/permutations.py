# The following function search goes through the permutations of the set
# {0, 1, ..., n - 1}. The function builds a list permutation that contains
# the permutation, and the search begins when the function is called without
# parameters.

n = 3
permutation = []
chosen = [False] * n

def search():
	if len(permutation) == n:
		# process permutation
		print(permutation)
	else:
		for i in range(n):
			if chosen[i]:
				continue
			chosen[i] = True
			permutation.append(i)
			search()
			chosen[i] = False
			permutation.pop()


if __name__ == "__main__":
	search()


