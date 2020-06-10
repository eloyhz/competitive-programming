# UVa 10763 - Foreign Exchange
# https://onlinejudge.org/external/107/10763.pdf


def can_exchange(n):
	source = []
	for _ in range(n):
		s, t = [int(x) for x in input().split()]
		source.append((s,t))
	source.sort()
	target = []
	for s in source:
		target.append((s[1], s[0]))
	target.sort()
	for s, t in zip(source, target):
		if s != t:
			return False
	return True

def can_exchange_wa(n):
	exchange = {}
	students = []
	for _ in range(n):
		s, t = [int(x) for x in input().split()]
		students.append((s,t))
	students.sort()
	for s in students:
		print(s)
	counter = 0
	for student in students:
		source = student[0]
		target = student[1]
		if target in exchange and exchange[target] == source:
			counter -= 1
		else:
			exchange[source] = target
			counter += 1
	print(counter, exchange)
	return counter == 0

	
if __name__ == "__main__":
	while True:
		n = int(input())
		if n == 0:
			break
		print("YES" if can_exchange(n) else "NO")
