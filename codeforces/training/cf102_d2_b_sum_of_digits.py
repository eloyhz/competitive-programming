#
# Author: eloyhz
# Date: Sep/11/2020
#
# Codeforces (CF102-D2-B) - Sum of Digits
# https://codeforces.com/contest/102/problem/B
#


if __name__ == '__main__':
    n = input()
    ans = 0
    while len(n) > 1:
        m = 0
        for d in n:
            m += int(d)
        n = str(m)
        ans += 1
    print(ans)
            
