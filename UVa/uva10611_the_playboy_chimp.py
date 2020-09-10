# UVa 10611 - The Playboy Chimp
# https://onlinejudge.org/external/106/10611.pdf
#
# Author: eloyhz
# Date: Sep/10/2020
#


def taller(height, chimps):
    left = 0
    # Left invariant: chimps[left] <= height (left not is taller)
    if chimps[left] > height:
        return chimps[left]
    right = len(chimps) - 1
    # Right invariant: chimps[right] > height (right is taller)
    if chimps[right] <= height:
        return 'X'
    while right > left + 1:
        mid = (left + right) // 2
        if chimps[mid] > height:
            right = mid
        else:
            left = mid
    return chimps[right]


def shorter(height, chimps):
    left = 0
    # Left invariant: chimps[left] < height (left is shorter)
    if chimps[left] >= height:
        return 'X'
    right = len(chimps) - 1
    # Right invariant: chimps[right] >= height (right not is shorter)
    if chimps[right] < height:
        return chimps[right]
    while right > left + 1:
        mid = (left + right) // 2
        if chimps[mid] < height:
            left = mid
        else:
            right = mid
    return chimps[left]


if __name__ == '__main__':
    n = int(input())
    chimps = [int(x) for x in input().split()]
    q = int(input())
    luchu = [int(x) for x in input().split()]
    for h in luchu:
        print(shorter(h, chimps), taller(h, chimps))

