# TCArg 2020 - Contest #9
# Eugeny and Play List
# https://codeforces.com/group/j1UosVRZar/contest/288666/problem/K

def find_song(play_list, moment):
	n = len(play_list)
	left = 0
	right = n - 1
	result = -1
	while left <= right:
		mid = (left + right) // 2
		##  print(f"left={left}, mid={mid}, right={right}, moment={moment}")
		if play_list[mid][1] <= moment <= play_list[mid][2]:
			result = play_list[mid][0]
			break
		elif moment < play_list[mid][1]:
			right = mid - 1
		else:
			left = mid + 1
	return result


if __name__ == "__main__":
	n, m = [int(x) for x in input().split()]
	play_list = []
	current_time = 1
	for i in range(n):
		ci, ti = [int(x) for x in input().split()]
		start_time = current_time
		end_time = start_time + ci * ti - 1
		play_list.append((i + 1, start_time, end_time))
		current_time = end_time + 1
	moments = [int(x) for x in input().split()]
	for m in moments:
		print(find_song(play_list, m))
		
