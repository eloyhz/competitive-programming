#
# Author: eloyhz
# Date: Sep/22/2020
#
# UVa 00439 - Knight Moves
# https://onlinejudge.org/external/4/439.pdf
#

from sys import stdin
from collections import deque


def solve(s, t):
    frontier = deque()
    frontier.append(s)
    distance = {s: 0}
    neighbors = [(2, 1), (1, 2), (-1, 2), (-2, 1), 
                (-2, -1), (-1, -2), (1, -2), (2, -1)]

    while frontier:
        c = frontier.popleft()
#        print(f'{c = }')
        if c == t:
            break
        for n in neighbors:
            u = (c[0] + n[0], c[1] + n[1])
            if u[0] < 1 or u[0] > 8 or u[1] < 1 or u[1] > 8:
                continue 
            if u not in distance:
                frontier.append(u)
                distance[u] = distance[c] + 1
    return distance[t]


if __name__ == '__main__':
   for line in stdin:
       a, b = line.split()
       s = (int(a[1]), ord(a[0]) - ord('a') + 1)
       t = (int(b[1]), ord(b[0]) - ord('a') + 1)
       d = solve(s, t)
       print(f'To get from {a} to {b} takes {d} knight moves.')

