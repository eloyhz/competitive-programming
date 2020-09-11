#
# Author: eloyhz
# Date: Sep/11/2020
#
# Codeforces (CF47-D2-B) - Coins
# https://codeforces.com/contest/47/problem/B
#

def read_weight():
    w = list(input())
    if w[1] == '>':
        w[1] = '<'
        w[0], w[2] = w[2], w[0]
    return ''.join(w)


if __name__ == '__main__':
    coins = [['ABC', 'A<B', 'A<C', 'B<C'],
             ['ACB', 'A<C', 'A<B', 'C<B'],
             ['BAC', 'B<A', 'B<C', 'A<C'],
             ['BCA', 'B<C', 'B<A', 'C<A'],
             ['CAB', 'C<A', 'C<B', 'A<B'],
             ['CBA', 'C<B', 'C<A', 'B<A']]
    w1 = read_weight()
    w2 = read_weight()
    w3 = read_weight()
    ans = None
    for c in coins:
        if w1 in c and w2 in c and w3 in c:
            ans = c[0]
            break
    print(ans if ans else 'Impossible')
