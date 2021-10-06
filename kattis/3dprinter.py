# Kattis - 3D Printed Statues
# https://open.kattis.com/problems/3dprinter
# 06-10-2021

statues = int(input())
days = 1
printers = 1
while printers < statues:
    days += 1
    printers *= 2
print(days)