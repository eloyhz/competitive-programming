#
# Author: eloyhz
# Date: Sep/21/2020
#
# Codeforces (CF152-D2-B) - Steps
# https://codeforces.com/contest/152/problem/B
#


def calculate_steps(n, m, xc, yc, dx, dy):
    if dx == dy == 0:
        return 0
    if dx == 0 and dy > 0:
        return (m - yc) // dy
    elif dx == 0 and dy < 0:
        return (yc - 1) // -dy
    elif dy == 0 and dx > 0:
        return (n - xc) // dx
    elif dy == 0 and dx < 0:
        return (xc - 1) // -dx
    if dx > 0 and dy > 0:
        xs = (n - xc) // dx
        ys = (m - yc) // dy
    elif dx > 0 and dy < 0:
        xs = (n - xc) // dx
        ys = (yc - 1) // -dy
    elif dx < 0 and dy > 0:
        xs = (xc - 1) // -dx
        ys = (m - yc) // dy
    elif dx < 0 and dy < 0:
        xs = (xc - 1) // -dx
        ys = (yc - 1) // -dy
    return min(xs, ys)


if __name__ == '__main__':
    n, m = [int(x) for x in input().split()]
    xc, yc = [int(x) for x in input().split()]
    k = int(input())
    steps = 0
    while k > 0:
        dx, dy = [int(x) for x in input().split()]
        s = calculate_steps(n, m, xc, yc, dx, dy)
    #    print(f'{xc = }, {yc = }, {dx = }, {dy = }, {s = }')
        xc, yc = xc + dx * s, yc + dy * s
        steps += s
        k -= 1
    print(steps)

