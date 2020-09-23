#
# Author: eloyhz
# Date: Sep/23/2020
#
# Codeforces (CF262-D2-B) - Roma and Changing Signs
# https://codeforces.com/contest/262/problem/B
#


if __name__ == '__main__':
    n, k = [int(x) for x in input().split()]
    a = [int(x) for x in input().split()]
    s = 0
    for x in a:
        if x < 0:
            s += 1
    if s == 0:
        for _ in range(k):
            a[0] *= -1
    elif k <= s:
        for i in range(k):
            a[i] *= -1
    else:
        r = k - s
        for i in range(s):
            a[i] *= -1
        if i < n - 1 and a[i + 1] < a[i]:
            i += 1
        while r > 0:
            a[i] *= -1
            r -= 1
    print(sum(a))


