import time

subset = []

# Method 1 go through all subsets of a set using recursion
# The function maintains a list subset that will contain the elements of each subset.
# The search begins when the function is called with parameter 0.
# Reference: Competitive Programmer's Handbook p. 47
def method1(k, n):
	if k == n:
		# print(subset)
		return
	else:
		method1(k + 1, n)
		subset.append(k)
		method1(k + 1, n)
		subset.pop()

		
# Method 2 generate subsets based on the bit representation of integers.
# Each subset of a set of n elements can be represented as a sequence of n bits,
# which corresponds to an integer between 0..2^n - 1. The ones in the bit sequence
# indicate which elements are included in the subset.
# Reference: Competitive Programmer's Handbook p. 48
def method2(n):
	for b in range(1 << n):
		subset = []
#		print("b = ", b)
		for i in range(n):
#			print("i = ", i, ", ", b, "&", 1 << i, "=", b & (1 << i))
			if b & (1 << i):
				subset.append(i)
		# print(subset)


if __name__ == "__main__":
	n = 20
	print("Method 1")
	start_time = time.time()
	method1(0, n)
	end_time_1 = time.time() - start_time
	print("Method 2")
	start_time = time.time()
	method2(n)
	end_time_2 = time.time() - start_time
	print("Method 1 --- %s seconds ---" % end_time_1)
	print("Method 2 --- %s seconds ---" % end_time_2)



################# METHOD 2 ###############################

#	n = 3
#	1 << n = 1 << 3 = 1000b = 8
#	b = [0..7]  because there are 2^n = 2^3 = 8 subsets


#	i	(1 << i)
#---------------
#	0	1
#	1	10b = 2
#	2	100b = 4
#
#	i = [1, 2, 4]

#	Bitwise & between [0..7] & [1, 2, 4]

#	[0..7]
#	---------
#	0 0 0
#	0 0 1
#	0 1 0
#	0 1 1
#	1 0 0
#	1 0 1
#	1 1 0
#	1 1 1

#	[1, 2, 4]
#	----------
#	0 0 1
#	0 1 0
#	1 0 0


