# Kattis - Provinces and Gold
# https://open.kattis.com/problems/provincesandgold
# Date: 2021-07-01

g, s, c = [int (x) for x in input().split()]
buying_power = g * 3 + s * 2 + c
victory_card = None
if buying_power >= 8:
    victory_card = "Province"
elif buying_power >= 5:
    victory_card = "Duchy"
elif buying_power >= 2:
    victory_card = "Estate"

if buying_power >= 6:
    treasure_card = "Gold"
elif buying_power >= 3:
    treasure_card = "Silver"
else:
    treasure_card = "Copper"

if victory_card is None:
    print(treasure_card)
else:
    print(f"{victory_card} or {treasure_card}")
