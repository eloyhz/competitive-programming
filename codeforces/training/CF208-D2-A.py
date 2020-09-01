# Codeforces - Dubstep
# https://codeforces.com/contest/208/problem/A
#
# Author: eloyhz
# Date: Sep/01/2020
#
# A simple and easy solution:
# print(s.replace('WUB', ' ').strip())


if __name__ == '__main__':
    s = input()
    song = []
    i = 0
    while True:
        p = i
        i = s.find('WUB', i)
        if i < 0:
            song.append(s[p:])
            break
        else:
            if i != p:
                song.append(s[p:i])
            i += 3
    print(' '.join(song))
