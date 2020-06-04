# UVa 1203 - Argus
# https://onlinejudge.org/external/12/1203.pdf

import heapq

def simulate(k, registers):
	heapq.heapify(registers)
	for _ in range(k):
		reg = heapq.heappop(registers)
		print(reg[1])
		reg[0] += reg[2]
		heapq.heappush(registers, reg)


if __name__ == "__main__":
	registers = []
	while True:
		try:
			command = input().split()
		except EOFError:
			break
		if command[0] == "Register":
			registers.append([int(command[2]), int(command[1]), int(command[2])])
		elif command[0] == "#":
			k = int(input())
			simulate(k, registers)

