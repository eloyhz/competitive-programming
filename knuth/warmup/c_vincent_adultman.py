v = int(input())
a = int(input())
r = int(input())
p = int(input())
h = int(input())
if v + a + r >= h or v + a + p >= h or \
	v + r + p >= h or a + r + p >= h:
	print("WAW")
else:
	print("AWW")

