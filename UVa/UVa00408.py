# UVa 00408 - Uniform Generator
# https://onlinejudge.org/external/4/408.pdf

from sys import stdin

if __name__ == '__main__':
    for line in stdin:
        step, mod = [int(x) for x in line.split()]
        nums = [False] * mod
        sx = 0
        nums[sx] = True
        for _ in range(mod):
            sx = (sx + step) % mod
            nums[sx] = True
        good = True
        for x in nums:
            if not x:
                good = False
                break
        result = ''
        result += str(step).rjust(10)
        result += str(mod).rjust(10)
        result += '    ' + ('Good' if good else 'Bad') + ' Choice'
        result += '\n'
        print(result)


