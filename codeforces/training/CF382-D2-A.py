# Codeforces - Ksenia and Pan Scales
# https://codeforces.com/contest/382/problem/A
#
# Author: eloyhz
# Date: Sep/03/2020
#


if __name__ == '__main__':
    scales = input()
    left = scales.find('|')
    right = len(scales) - (left + 1)
    rest = input()
    if (len(rest) + left + right) % 2:
        print('Impossible')
    else:
        half = (len(rest) + left + right) // 2
        if left > half or right > half:
            print('Impossible')
        else:
            h1 = half - left
            s1 = scales[:left] + rest[:h1]
            s2 = scales[left + 1:] + rest[h1:]
            print(s1 + '|' + s2)


