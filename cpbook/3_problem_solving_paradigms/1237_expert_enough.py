# UVa 1237 - Expert Enough?
# https://onlinejudge.org/external/12/1237.pdf

if __name__ == "__main__":
	test = int(input())
	for t in range(test, 0, -1):
		d = int(input())
		db = []
		for _ in range(d):
			data = input().split()
			m = data[0]
			l = int(data[1])
			h = int(data[2])
			db.append((m, l, h))
		q = int(input())
		for _ in range(q):
			maker = "UNDETERMINED"
			m = 0
			p = int(input())
			for d in db:
				if d[1] <= p <= d[2]: 
					maker = d[0]
					m += 1
			if m == 1:
				print(maker)
			else:
				print("UNDETERMINED")
		if t > 1:
			print()

