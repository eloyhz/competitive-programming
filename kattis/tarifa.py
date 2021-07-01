# Kattis - Tarifa
# https://open.kattis.com/problems/tarifa
# Date: 2021-06-21


x = int(input())
n = int(input())
megas = 0
while n > 0:
    n -= 1
    megas += x
    p = int(input())
    megas -= p
megas += x
print(megas)

