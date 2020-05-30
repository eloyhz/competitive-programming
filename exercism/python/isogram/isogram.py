def is_isogram(string):
	letters = {}
	for ch in string.lower():
		if ch == " " or ch == "-":
			continue
		if ch in letters:
			return False
		letters[ch] = True
	return True
