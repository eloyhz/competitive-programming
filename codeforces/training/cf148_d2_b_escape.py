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
    while True:
        princess += vp
        if princess >= c:
            break
        if t > 0:
            t -= 1
        elif returning:
            dragon -= vd
            if dragon <= 0:
                dragon = -dragon
                returning = False
                t = f
        else:
            if dragon + vd < princess:
                dragon += vd
                continue
            ans += 1
            print(f'Catched at: {princess}')
            a = princess - dragon
            b = dragon + vd - princess
            dragon += (a - b)
            if dragon <= 0:
                dragon = -dragon
                returning = False
                t = f
            else:
                returning = True
        print(f'{princess = }, {dragon = }, {t = }, {returning = }, {ans = }')
    print(ans)
        

   

