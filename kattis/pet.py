# Kattis - Pet
# https://open.kattis.com/problems/pet
# 25-08-2021

if __name__ == '__main__':
    max_points = 0
    best_id = None
    for id in range(5):
        points = sum([int(x) for x in input().split()])
        if points > max_points:
            max_points = points
            best_id = id + 1
    print(f"{best_id} {max_points}")
