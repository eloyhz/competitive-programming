# Codeforces Round #640 (Div. 4)
# D. Alice, Bob and Candies
# https://codeforces.com/contest/1352/problem/D

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = [int(x) for x in input().split()]
        alice = []
        bob = []
        move = 1
        alice.append(a[0])
        last = a[0]
        a.pop(0)
        turn = "b"
        while len(a) > 0:
            if turn == "a":
                s = 0
                while last >= 0 and len(a) > 0:
                    candie = a[0]
                    a.pop(0)
                    last -= candie
                    s += candie
                    alice.append(candie)
                turn = "b"
                last = s
            elif turn == "b":
                s = 0
                while last >= 0 and len(a) > 0:
                    candie = a[-1]
                    a.pop()
                    last -= candie
                    s += candie
                    bob.append(candie)
                last = s
                turn = "a"
            move += 1
        print(move, sum(alice), sum(bob))
