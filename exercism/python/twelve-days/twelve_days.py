def recite(start_verse, end_verse):
	gifts = ["two Turtle Doves, ", \
			"three French Hens, ", \
			"four Calling Birds, ", \
			"five Gold Rings, ", \
			"six Geese-a-Laying, ", \
			"seven Swans-a-Swimming, ", \
			"eight Maids-a-Milking, ", \
			"nine Ladies Dancing, ", \
			"ten Lords-a-Leaping, ", \
			"eleven Pipers Piping, ", \
			"twelve Drummers Drumming, "]
	days = ["first", "second", "third", "fourth",\
			"fifth", "sixth", "seventh", "eighth",\
			"ninth", "tenth", "eleventh", "twelfth"]
	result = []
	for i in range(start_verse, end_verse + 1):
		day = days[i - 1]
		answer = f"On the {day} day of Christmas my true love gave to me: "
		for j in range(i, 1, -1):
			answer += gifts[j - 2]
		if i > 1:
			answer += "and "
		answer += "a Partridge in a Pear Tree."
		result.append(answer)
	return result

