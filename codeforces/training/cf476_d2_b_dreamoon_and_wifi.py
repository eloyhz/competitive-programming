#
# Author: eloyhz
# Date: Sep/18/2020
#
# Codeforces (CF476-D2-B) - Dreamoon and WiFi
# https://codeforces.com/contest/476/problem/B
#

def val(s):
    count = 0
    for c in s:
        if c == '+':
            count += 1
        else:
            count -= 1
    return count


if __name__ == '__main__':
    s1 = input()
    s2 = input()
    v = val(s1)
    p = []
    n = len(s2)
    m = 0
    for i in range(n):
        if s2[i] == '?':
            m += 1
            p.append(i)
    count = 0
    for i in range(1 << m):
        s3 = list(s2)
        for j in range(m):
            if i & (1 << j):
                s3[p[j]] = '+'
            else:
                s3[p[j]] = '-'
        if val(s3) == v:
            count += 1
#    print(f'{1 / count:.9f}' if count else f'{0:.9f}')
    print(f'{count / (1 << m):.9f}')





