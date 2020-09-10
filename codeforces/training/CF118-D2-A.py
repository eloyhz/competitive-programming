# Codeforces - String Task
# https://codeforces.com/contest/118/problem/A
#
# Author: eloyhz
# Date: Sep/10/2020
#


if __name__ == '__main__':
    vowels = ['a', 'o', 'y', 'e', 'u', 'i']
    word = input()
    for v in vowels:
        word = word.replace(v, '')
        word = word.replace(v.upper(), '')
    s = ''
    for c in word:
        s += '.'
        s += c.lower()
    print(s)

