# UVa 679 - Dropping Balls
# https://onlinejudge.org/external/6/679.pdf
# Reference: http://www.programmersought.com/article/6396375839/

def drop_ball(depth, ith_ball):
	result = 1
	for _ in range(depth - 1):
		if ith_ball % 2 == 0:	# even
			ith_ball //= 2
			result = result * 2 + 1
		else:
			ith_ball = (ith_ball + 1) // 2
			result *= 2
	return result


if __name__ == "__main__":
	tc = int(input())
	for _ in range(tc):
		d, l = [int(x) for x in input().split()]
		print(drop_ball(d, l))

