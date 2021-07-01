# Kattis - IsItHalloween.com
# https://open.kattis.com/problems/isithalloween
# Date: 2021-06-21


month, day = input().split()
if month == "OCT" and day == "31" or month == "DEC" and day == "25":
    print("yup")
else:
    print("nope")
