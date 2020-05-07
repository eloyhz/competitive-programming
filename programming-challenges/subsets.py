finished = False


def is_a_solution(a, k, n):
    return k == n


def construct_candidates(a, k, n, c):
    c.append(True)
    c.append(False)
    return 2    # 2 candidates


def process_solution(a, k):
    print("{", end="")
    for i in range(1, k + 1):
        if a[i]:
            print(" ", i, end="")
    print(" }")


def backtrack(a, k, data):
    if is_a_solution(a, k, data):
        process_solution(a, k)
    else:
        c = []
        k += 1
        num_candidates = construct_candidates(a, k, data, c)
        for i in range(num_candidates):
            a[k] = c[i]
            backtrack(a, k, data)
            if finished:
                return


def generate_subsets(n):
    a = [0] * 10
    backtrack(a, 0, n)


if __name__ == "__main__":
    generate_subsets(3)
