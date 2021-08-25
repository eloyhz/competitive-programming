# Kattis - No Duplicates
# https://open.kattis.com/problems/nodup
# 25-08-2021

if __name__ == "__main__":
    line = input().split()
    words = set()
    repeated = False
    for word in line:
        if word in words:
            repeated = True
            break
        words.add(word)
    print("no" if repeated else "yes")
