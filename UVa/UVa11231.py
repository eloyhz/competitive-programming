# UVa 11231 - Black and white painting
# https://onlinejudge.org/external/112/11231.pdf

if __name__ == '__main__':
    while True:
        n, m, c = [int(x) for x in input().split()]
        if n == m == c == 0:
            break
        x = n - 7
        y = m - 7
        r = x * y
        if r % 2 == 0 or c == 0:
            print(r // 2)
        else:
            print(r // 2 + 1)
