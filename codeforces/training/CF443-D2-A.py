# Anton and Letters
# https://codeforces.com/contest/443/problem/A
#
# Author: eloyhz
# Date: Aug/26/2020


if __name__ == '__main__':
    line = input().lstrip('{').rstrip('}')
    s = [x.strip() for x in line.split(',')]
    if s and s[0] == '':
        print(0)
    else:
        print(len(set(s)))

