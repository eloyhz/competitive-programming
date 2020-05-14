# C. Board Moves
# https://codeforces.com/contest/1353/problem/C


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        result = 0
        for i in range(1, n // 2 + 1):
            result += 8 * i * i
        print(result)
