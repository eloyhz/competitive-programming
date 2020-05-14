# B. Two Arrays And Swaps
# https://codeforces.com/contest/1353/problem/B

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n, k = [int(x) for x in input().split()]
        a = [int(x) for x in input().split()]
        b = [int(x) for x in input().split()]
        for _ in range(k):
            a.sort()
            b.sort()
            if a[0] > b[-1]:
                continue
            b[-1], a[0] = a[0], b[-1]
        print(sum(a))
