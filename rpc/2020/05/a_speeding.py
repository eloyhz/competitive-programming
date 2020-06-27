# Problem A. Speeding

if __name__ == "__main__":
	n = int(input())
	max_speed = 0
	ti, di = [int(x) for x in input().split()]
	for _ in range(n - 1):
		prev_ti, prev_di = ti, di
		ti, di = [int(x) for x in input().split()]
		speed = (di - prev_di) / (ti - prev_ti)
		max_speed = max(max_speed, speed)
	print(int(max_speed))

