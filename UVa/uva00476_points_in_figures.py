# UVa 00476 Points in Figures: Rectangles
# https://onlinejudge.org/external/4/476.pdf
#
# Author: eloyhz
# Date: Sep/10/2020
#

def point_in_rect(p, r):
    return p[0] > r[0] and p[0] < r[2] and p[1] < r[1] and p[1] > r[3]


if __name__ == '__main__':
    rects = []
    while True:
        line = input().split()
        if line[0] == '*':
            break
        rects.append([float(line[1]), float(line[2]), float(line[3]), float(line[4])])
    p = 0
    while True:
        point = [float(x) for x in input().split()]
        if point[0] == point[1] == 9999.9:
            break
        p += 1
        not_contained = True
        for i, rect in enumerate(rects):
            if point_in_rect(point, rect):
                print(f'Point {p} is contained in figure {i + 1}')
                not_contained = False
        if not_contained:
            print(f'Point {p} is not contained in any figure')
