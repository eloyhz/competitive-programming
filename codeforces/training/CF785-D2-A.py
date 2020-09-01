# Codeforces - Anton and Polyhedrons
# https://codeforces.com/contest/785/problem/A
#
# Author: eloyhz
# Date: Sep/01/2020


if __name__ == '__main__':
    p = {'Tetrahedron': 4, 'Cube': 6, 'Octahedron': 8, 'Dodecahedron': 12,
         'Icosahedron': 20}
    n = int(input())
    s = 0
    for _ in range(n):
        s += p[input()]
    print(s)

