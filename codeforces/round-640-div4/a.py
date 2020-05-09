if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        r = []
        c = 0
        while n > 10:
            d = n % 10
            if d != 0:
                r.append(d * 10 ** c)
            c += 1
            n //= 10
        r.append(n * 10 ** c)
        result = str(len(r)) + "\n"
        for a in r:
            result += str(a) + " "
        print(result)
