#
# Author: eloyhz
# Date: Sep/18/2020
#
# Codeforces (CF400-D2-B) - Inna and New Matrix of Candies
# https://codeforces.com/contest/400/problem/B
#


def solve_wa(n, m):
    best = 1001
    mat = []
    for _ in range(n):
        line = input()
        g = line.find('G')
        s = line.find('S')
        if s > g:
            best = min(best, s - g)
        mat.append(line)
    ok = True
    for line in mat:
        g = line.find('G')
        s = line.find('S') 
        d = m - g - 1
        if g > s and d <= best:
            ok = False
            break
    return best if ok else -1


def solve_editorial(n, m):
    """
    The answer is the number of distinct distances, 
    as one step kills all distances of the minimal length.
    """
    sol = set()
    for _ in range(n):
        line = input()
        g = line.find('G')
        s = line.find('S')
        if s < g:
            return -1
        sol.add(s - g)
    return len(sol)


if __name__ == '__main__':
    n, m = [int(x) for x in input().split()]
    print(solve_editorial(n, m))
