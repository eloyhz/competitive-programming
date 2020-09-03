# Codeforces - Chewbaсca and N#umber
# https://codeforces.com/contest/514/problem/A
#
# Author: eloyhz
# Date: Sep/02/2020
#

def invert(num, s):
    nums = list(str(num))
    for i in s:
        t = int(nums[i])
        if i == 0 and t == 9:
            continue
        nums[i] = str(9 - t)
    return int(''.join(nums))


if __name__ == '__main__':
    x = int(input())
    result = 10 ** 18 + 1
    n = len(str(x))
    for i in range(1 << n):
        s = set()
        for j in range(n):
            if i & (1 << j):
                s.add(j)
        r = invert(x, s)
        if r < result and r > 0:
            result = r
    print(result)

