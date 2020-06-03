# UVa 11413 - Fill the Containers
# https://onlinejudge.org/external/114/11413.pdf


def can_fill(vessels, max_containers, max_capacity):
	count_containers = 1
	i = 0
	sum_capacity = 0
	while i < len(vessels) and count_containers <= max_containers:
		if sum_capacity + vessels[i] <= max_capacity:
			sum_capacity += vessels[i]
			i += 1
		else:
			sum_capacity = 0
			count_containers += 1
	if count_containers <= max_containers and i == len(vessels):
		return True
	else:
		return False
			
		
def bin_search_the_answer(vessels, max_containers):
	lo = 1
	hi = 10 ** 9
	while hi - lo > 1:
		mid = lo + (hi - lo) // 2
		if can_fill(vessels, max_containers, mid):
			hi = mid
		else:
			lo = mid
	return lo if can_fill(vessels, max_containers, lo) else hi


if __name__ == "__main__":
	while True:
		try:
			line = input()
			if line == "":
				continue
			n, m = [int(x) for x in line.split()]
		except EOFError:
			break
		vessels = [int(x) for x in input().split()]
		max_capacity = bin_search_the_answer(vessels, m)
		print(max_capacity)

