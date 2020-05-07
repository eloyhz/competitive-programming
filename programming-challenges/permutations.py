finished = False
NUM_MAX = 1000


def is_a_solution(a, k, n):
    return k == n


def construct_candidates(a, k, n, c):
    in_perm = [False] * NUM_MAX

    for i in range(1, k):
        in_perm[ a[i] ] = True

    num_candidates = 0
    for i in range(1, n + 1):
        if not in_perm[i]:
            c.append(i)
            num_candidates += 1
    return num_candidates


def process_solution(a, k):
    for i in range(1, k + 1):
        print(" ", a[i], end="")
    print()


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


def generate_permutations(n):
    a = [0] * NUM_MAX
    backtrack(a, 0, n)


if __name__ == "__main__":
    generate_permutations(10)
