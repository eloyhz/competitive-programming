def can(x, n):
    return x * x > n

def sqrt_int(n):
    low = 0
    high = 10 ** 5
    while low + 1 < high:
        mid = (low + high) // 2
        if can(mid, n):
            high = mid
        else:
            low = mid
    return low

def sqrt_float(n):
    low = 0
    high = 10 ** 5
    for _ in range(100):
        mid = (low + high) / 2
        if can(mid, n):
            high = mid
        else:
            low = mid
    return low

if __name__ == '__main__':
    print(sqrt_int(81))
    print(sqrt_float(2))
