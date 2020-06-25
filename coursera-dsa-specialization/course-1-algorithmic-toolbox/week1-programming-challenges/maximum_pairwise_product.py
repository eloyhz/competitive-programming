# Algorithmic Toolbox at Coursera
# Programming Challenges (Week 1)
# Maximum Pairwise Product


def maximum_pairwise_product_nlogn(numbers):
	numbers.sort(reverse=True)
	return numbers[0] * numbers[1]


def maximum_pairwise_product_fast(numbers):
	index_1 = 0
	for i in range(1, n):
		if a[i] > a[index_1]:
			index_1 = i
	index_2 = 0 if index_1 > 0 else 1
	for i in range(1, n):
		if i != index_1 and a[i] > a[index_2]:
			index_2 = i
	return a[index_1] * a[index_2]


def maximum_pairwise_product(numbers):
	n = len(numbers)
	max1 = 0
	for i in range(n):
		if a[i] > max1:
			max1 = a[i]
			i_max1 = i
	max2 = 0
	for i in range(n):
		if a[i] > max2 and i != i_max1:
			max2 = a[i]
	return max1 * max2


if __name__ == "__main__":
	n = int(input())
	a = [int(x) for x in input().split()]
	print(maximum_pairwise_product_fast(a))

	
		

