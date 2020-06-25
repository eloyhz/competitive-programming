# Algorithmic Toolbox at Coursera
# Programming Challenges (Week 1)
# Maximum Pairwise Product


def maximum_pairwise_product(numbers):
	numbers.sort(reverse=True)
	return numbers[0] * numbers[1]

def maximum_pairwise_product_1(numbers):
	n = len(numbers)
	max1 = 0
	for i in range(n):
		if a[i] > a[max1]:
			max1 = i
	max2 = 0
	for i in range(n):
		if a[i] > a[max2] and i != max1:
			max2 = i
	return numbers[max1] * numbers[max2]


if __name__ == "__main__":
	n = int(input())
	a = [int(x) for x in input().split()]
	print(maximum_pairwise_product(a))

	
		

