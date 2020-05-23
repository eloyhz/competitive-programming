# Reference:
# http://2018.nwerc.eu/files/nwerc2018slides-handout.pdf

n, m = [int (x) for x in input().split()]
a = input()
b = input()
plaintext = ['_'] * (m - n)
plaintext += list(a)
for i in range(m - n - 1, -1, -1):
	bi = ord(b[i + n]) - 97
	ai = ord(plaintext[i + n]) - 97
	ai = (bi - ai) % 26
	plaintext[i] = chr(97 + ai)
print(''.join(list(plaintext)))
