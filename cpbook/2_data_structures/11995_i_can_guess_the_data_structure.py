# UVa 11995 - I Can Guess the Data Structure!
# https://onlinejudge.org/external/119/11995.pdf

import heapq

def test_case(n):
	stack = []
	queue = []
	p_queue = []
	is_stack = is_queue = is_pq = True
	for i in range(n):
		command, x = [int(w) for w in input().split()]
		if command == 1:
			stack.append(x)
			queue.append(x)
			heapq.heappush(p_queue, -x)
		elif command == 2:
			if len(stack) == 0 or x != stack.pop():
				is_stack = False
			if len(queue) == 0 or x != queue.pop(0):
				is_queue = False
			if len(p_queue) == 0 or x != -heapq.heappop(p_queue):
				is_pq = False
	if is_stack == is_queue == is_pq == False:
		print("impossible")
	elif is_stack and not is_queue and not is_pq:
		print("stack")
	elif not is_stack and is_queue and not is_pq:
		print("queue")
	elif not is_stack and not is_queue and is_pq:
		print("priority queue")
	else:
		print("not sure")
	

if __name__ == "__main__":
	while True:
		try:
			n = int(input())
		except EOFError:
			break
		test_case(n)

