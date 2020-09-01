# Codeforces - Valera and X
# https://codeforces.com/contest/404/problem/A
#
# Author: eloyhz
# Date: Sep/01/2020


if __name__ == '__main__':
    n = int(input())
    mat = []
    for _ in range(n):
        mat.append(input())
    diag = set()
    cross = True
    j = n - 1
    for i in range(n):
        diag.add( (i, i) )
        diag.add( (i, j) )
        if mat[i][i] != mat[0][0] or mat[i][j] != mat[0][0]:
            cross = False
            break
        j -= 1
    if not cross or mat[0][0] == mat[0][1]:
        print('NO')
    else:
        for i in range(n):
            for j in range(n):
                if (i, j) in diag:
                    continue
                if mat[i][j] != mat[0][1]:
                    cross = False
        print('YES' if cross else 'NO')


