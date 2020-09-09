# UVa 10452 - Marcus, help!
# https://onlinejudge.org/external/104/10452.pdf
#
# Author: eloyhz
# Date: Sep/08/2020
#

def solve(m, n, c):
    path = []
    letters = 'IEHOVA#'
    k = 0
    i = m - 1
    j = c[m - 1].find('@')
    while c[i][j] != '#':
        # left
        if j > 0 and c[i][j - 1] == letters[k]:
            path.append('left')
            j -= 1
            k += 1
        # right
        elif j < n - 1 and c[i][j + 1] == letters[k]:
            path.append('right')
            j += 1
            k += 1
        # forth
        elif i > 0 and c[i - 1][j] == letters[k]:
            path.append('forth')
            i -= 1
            k += 1
    print(' '.join(path))



if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        m, n = [int(x) for x in input().split()]
        c = []
        for _ in range(m):
            c.append(input())
        solve(m, n, c)

