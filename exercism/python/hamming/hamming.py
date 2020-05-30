def distance(strand_a, strand_b):
	if len(strand_a) != len(strand_b):
		raise ValueError("Hamming distance is only defined for sequences of equal length")
	return sum([1 if s[0] != s[1] else 0 for s in zip(strand_a, strand_b)])
	# n = len(strand_a)
	# for i in range(n):
	#	if strand_a[i] != strand_b[i]:
	#		differences += 1
	# return differences
