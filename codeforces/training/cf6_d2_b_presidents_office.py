#
# Author: eloyhz
# Date: Sep/14/2020
#
# Codeforces (CF6-D2-B) - President's Office
# https://codeforces.com/contest/6/problem/B
#

def mark(room, n, m, x, y, c):
    room[y][x] = '.'
    if y > 0 and room[y - 1][x] == c:
        mark(room, n, m, x, y - 1, c)
    if y < n - 1 and room[y + 1][x] == c:
        mark(room, n, m, x, y + 1, c)
    if x > 0 and room[y][x - 1] == c:
        mark(room, n, m, x - 1, y, c)
    if x < m - 1 and room[y][x + 1] == c:
        mark(room, n, m, x + 1, y, c)


if __name__ == '__main__':
    n, m, c = [x for x in input().split()]
    n = int(n)
    m = int(m)
    room = []
    president = []
    for _ in range(n):
        room.append(list(input()))
    for x in range(m):
        for y in range(n):
            if room[y][x] == c:
                president.append((x, y))
    # print(room)
    x1, y1 = president[0]
    x2, y2 = president[-1]
    # print(f'{x1 = }, {y1 = }, {x2 = }, {y2 = }')
    deputies = 0
    for x in range(x1, x2 + 1):
        if y1 > 0 and room[y1 - 1][x] != '.':
            deputies += 1
            mark(room, n, m, x, y1 - 1, room[y1 - 1][x])
        if y2 < n - 1 and room[y2 + 1][x] != '.':
            deputies += 1
            mark(room, n, m, x, y2 + 1, room[y2 + 1][x])
    for y in range(y1, y2 + 1):
        if x1 > 0 and room[y][x1 - 1] != '.':
            deputies += 1
            mark(room, n, m, x1 - 1, y, room[y][x1 - 1])
        if x2 < m - 1 and room[y][x2 + 1] != '.':
            deputies += 1
            mark(room, n, m, x2 + 1, y, room[y][x2 + 1])
    print(deputies)


