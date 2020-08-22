# RPC 08 - Rockabye Tobby [TLE]

import heapq

if __name__ == '__main__':
	t = int(input())
	for _ in range(t):
		n, k = [int(x) for x in input().split()]
		medicines = []
		for p in range(n):
			med = input().split()
			medicines.append( (med[0], int(med[1]), p) )
		result = []
		heapq.heapify(result)
		for i in range(k):
			for j in range(n):
				heapq.heappush(result, (medicines[j][1] * (i + 1), medicines[j][2], j) )
		for i in range(k):
			r = heapq.heappop(result)
			print(r[0], medicines[r[2]][0])

