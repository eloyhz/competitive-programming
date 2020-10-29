#
# Author: eloyhz
# Date: Oct/29/2020
#
# Codeforces (CF614-D2-B) - Gena's Code
# https://codeforces.com/contest/614/problem/B
#

if __name__ == '__main__':
    n = int(input())
    a = [x for x in input().split()]
    nb = '1'
    for x in a:
        if x == '0':
            nb = None
            break
        if x[0] != '1':
            nb = x
        else:
            for i in range(1, len(x)):
                if x[i] != '0':
                    nb = x
    if nb is None:
        print(0)
    else:
        ans = nb
        for x in a:
            if x == nb:
                continue
            ans += '0' * (len(x) - 1)
        print(ans)
