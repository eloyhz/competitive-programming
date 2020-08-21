# CSES - Palindrome Reorder
# https://cses.fi/problemset/task/1755/

from collections import Counter

if __name__ == '__main__':
	s = input()
	c = Counter(s)
	odd = None
	odd_count = 0
	for k in c:
		if c[k] % 2:
			odd = k
			odd_count += 1
	if odd_count > 1:
		print('NO SOLUTION')
	else:
		if odd_count == 1:
			solution = odd * c[odd] 
		else:
			solution = ''
		for k in c:
			if k == odd:
				continue
			solution = k * (c[k] // 2) + solution + k * (c[k] // 2)
		print(solution)
		
