#
# Author: eloyhz
# Date: Sep/11/2020
#
# Codeforces (CF78-D2-B) - Easter Eggs
# https://codeforces.com/contest/78/problem/B
#


if __name__ == '__main__':
    colors = 'ROYGBIV'
    n = int(input())
    m = n % 7
    d = n // 7
    ans = ''
    if m == 1 or m == 2 or m == 3:
        ans = colors[:4] + colors[:m] + colors[4:]
    else:
        ans = colors + colors[:m]
    ans += colors * (d - 1)
    print(ans)
