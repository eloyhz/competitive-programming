#
# Author: eloyhz
# Date: Sep/21/2020
#
# Codeforces (CF148-D2-B) - Escape
# https://codeforces.com/contest/148/problem/B
#


if __name__ == '__main__':
    vp = int(input())
    vd = int(input())
    t = int(input())
    f = int(input())
    c = int(input())
    ans = 0
    dragon, princess = 0, 0
    returning = False
    while princess < c:
        princess += vp
        if princess >= c:
            break
        if t > 0:
            t -= 1
        elif returning:
            dragon -= vd
            if dragon <= 0:
                dragon = 0
                returning = False
                t = f
        else:
            dragon += vd
            if dragon == princess:
                ans += 1
                returning = True
#        print(f'{princess = }, {dragon = }, {t = }, {returning = }, {ans = }')
    print(ans)
        

   

