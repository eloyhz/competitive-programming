fun main()	{
	val input = readLine()!!
	var gl = 0
	var gr = 0
	var pl = 0
	var pr = 0
	var serve = 0  // 0 = left, 1 = right
	var winner = -1 // 0 = left, 1 = right
	for (c in input)	{
		when (c)	{
			'S' -> if (serve == 0) pl++ else pr++
			'R' -> {
				if (serve == 0) pr++ else pl++
				serve = 1 - serve
			}
			'Q' -> {
				when (winner)	{
					0 -> println("${gl} (winner) - ${gr}")
					1 -> println("${gl} - ${gr} (winner)")
					else -> {
						print("${gl} (${pl}${if (serve == 0) "*" else ""}) - ")
						println("${gr} (${pr}${if (serve == 1) "*" else ""})")
					}
				}
			}
		}
		if (pl >= 5 && pl - pr >= 2 || pl >= 10) {
			gl++
			pl = 0
			pr = 0
		}
		else if (pr >= 5 && pr - pl >= 2 || pr >= 10)	{
			gr++
			pl = 0
			pr = 0
		}
		if (gl == 2)
			winner = 0
		else if (gr == 2)
			winner = 1
	}
}


