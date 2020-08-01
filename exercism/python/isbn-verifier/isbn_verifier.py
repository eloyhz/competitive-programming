def is_valid(isbn):
	if len(isbn) < 10:
		return False
	value = 0
	num = 10
	for i in range(len(isbn) - 1):
		c = isbn[i]
		if c.isdigit():
			value += int(c) * num
			num -= 1
	if isbn[-1].lower() == 'x':
		value += 10
	elif isbn[-1].isdigit():
		value += int(isbn[-1])
	else:
		return False
	return True if value % 11 == 0 else False

