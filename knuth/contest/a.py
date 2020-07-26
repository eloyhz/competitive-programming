mp = {'o': '0', 'i': '1', 'z': '2', 'e': '3', 'a': '4', 's': '5', \
		'g': '6', 't': '7', 'b': '8'}

s = list(input())
for i in range(len(s)):
	c = s[i].lower()
	if c in mp:
		s[i] = mp[c]
print(''.join(s))
	
