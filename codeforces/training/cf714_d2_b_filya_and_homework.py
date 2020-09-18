#
# Author: eloyhz
# Date: Sep/18/2020
#
# Codeforces (CF714-D2-B) - Filya and Homework
# https://codeforces.com/contest/714/problem/B
#


if __name__ == '__main__':
    n = int(input())
    a = [int(x) for x in input().split()]
    min_a = min(a)
    max_a = max(a)
    if len(set(a)) <= 2:
        print('YES')
    elif (max_a - min_a) % 2:
        print('NO')
    else:
        ok = True
        x = (max_a - min_a) // 2
        mid = min_a + x
        for num in a:
            if num == mid:
                continue
            elif num < mid and num + x != mid or num > mid and num - x != mid:
                ok = False
                break
        print('YES' if ok else 'NO')

