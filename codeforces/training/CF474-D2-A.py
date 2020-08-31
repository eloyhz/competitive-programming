# Codeforces - Keyboard
# https://codeforces.com/contest/474/problem/A
#
# Author: eloyhz
# Date: Aug/31/2020

if __name__ == '__main__':
    k = ['qwertyuiop', 'asdfghjkl;', 'zxcvbnm,./']
    d = input()
    s = input()
    r = ''
    for c in s:
        for i in range(3):
            for j in range(10):
                if c == k[i][j]:
                    r += (k[i][j - 1] if d == 'R' else k[i][j + 1])
                    break
    print(r)

