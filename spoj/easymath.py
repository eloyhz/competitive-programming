# SPOJ - EASYMATH
# https://www.spoj.com/problems/EASYMATH/
#
# Author: eloyhz
# Date: Sep/10/2020
#

def gcd(a, b):
  return gcd(b, a % b) if b else a

def lcm(a, b):
  return a * b // gcd(a, b)

def solve(n, p):
  xsum = 0
  for msk in range(1 << 5):
    mult = 1
    bits = 0
    for i in range(5):
      if msk & (1 << i):
        bits += 1
        mult = lcm(mult, p[i])
    if bits == 0:
      continue
    cur = n // mult
    if bits % 2 == 1:
      xsum += cur
    else:
      xsum -= cur
  return n - xsum

if __name__ == '__main__':
  p = [0] * 5
  t = int(input())
  for _ in range(t):
    n, m, a, d = [int(x) for x in input().split()]
    for i in range(5):
      p[i] = a + i * d
    print(solve(m, p) - solve(n - 1, p))

