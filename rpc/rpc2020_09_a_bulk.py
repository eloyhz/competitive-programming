# Competitive Programming Network - 9th Activity
# Problem A. Buying in Bulk
#
# Author: eloyhz
# Date: Sep/12/2020
#


if __name__ == '__main__':
    c, p = [int(x) for x in input().split()]
    print(c * p - (c - 1) * 2)
