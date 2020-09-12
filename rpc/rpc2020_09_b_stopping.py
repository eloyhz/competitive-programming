# Competitive Programming Network - 9th Activity
# Problem B. Are We Stopping Again?
#
# Author: eloyhz
# Date: Sep/12/2020
#

def gcd(a, b):
    return gcd(b, a % b) if b else a

def lcm(a, b):
    return a * b // gcd(a, b)

if __name__ == '__main__':
    m, g, f = [int(x) for x in input().split()]
    ans = m // g + m // f
    if m % g == 0:
        ans -= 1
    if m % f == 0:
        ans -= 1
    l = lcm(g, f)
    ans -= m // l
    if m % l == 0:
        ans += 1
    print(ans)
