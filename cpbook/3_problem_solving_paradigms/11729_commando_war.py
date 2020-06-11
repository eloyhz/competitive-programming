# UVa 11729 - Commando War
# https://onlinejudge.org/external/117/11729.pdf


def solve(n, soldiers):
	soldiers.sort(reverse=True)
	result = prev = 0
	for s in soldiers:
		result = max(result, s[0] + s[1] + prev)
		prev += s[1]
	return result
	

if __name__ == "__main__":
	tc = 0
	while True:
		line = input()
		if line == "":
			continue
		n = int(line)
		if n == 0:
			break
		tc += 1
		soldiers = []
		for _ in range(n):
			b, j = [int(x) for x in input().split()]
			soldiers.append((j, b))
		total_time = solve(n, soldiers)
		print(f"Case {tc}: {total_time}")

