# Algorithmic Toolbox at Coursera
# Programming Challenges (Week 1)
# Sum of Two Digits


def sum_of_digits(first_digit, second_digit):
	return first_digit + second_digit


if __name__ == "__main__":
	a, b = [int(x) for x in input().split()]
	print(sum_of_digits(a, b))
