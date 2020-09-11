#
# Author: eloyhz
# Date: Sep/11/2020
#
# Codeforces (CF680-D2-B) - Bear and Finding Criminals
# https://codeforces.com/contest/680/problem/B
#

if __name__ == '__main__':
    n, a = [int(x) for x in input().split()]
    t = [int(x) for x in input().split()]
    max_d = max(a - 1, n - a)
    d = 0
    criminals = 0
    while d <= max_d:
        i = a - d - 1
        j = a + d - 1
        left = t[i] if i >= 0 else -1
        right = t[j] if j < n else -1
        # print(f'{d = }, {i = }, {j = }, {left = }, {right = }')
        if left == right == 1:
            criminals += 1 if i == j else 2
        elif left == 1 and right == -1 or left == -1 and right == 1:
            criminals += 1
        d += 1
    print(criminals)

        
