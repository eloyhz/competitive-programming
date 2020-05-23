from sys import maxsize

if __name__ == "__main__":
	n = int(input())
	canisters = [int(c) for c in input().split()]
	canisters.sort()
	fmin = maxsize
	impossible = False
	for b in range(1, n + 1):
		f = canisters[b - 1] / b
		if f > 1:
			impossible = True
			break
		fmin = min(fmin, f)
	if impossible:
		print("impossible")
	else:
		result = "{:.6f}".format(fmin)
		result = result.rstrip('0')
		result = result.rstrip('.')
		print(result)
