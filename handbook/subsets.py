n = 3
for b in range(1 << n):
	subset = []
	print("b = ", b)
	for i in range(n):
		print("i = ", i, ", ", b, "&", 1 << i, "=", b & (1 << i))
		if b & (1 << i):
			subset.append(i)
	print(subset)

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


