fun main()	{
	var current = 100
	var ans = current
	repeat(readLine()!!.toInt())	{
		current += readLine()!!.toInt()
		ans = maxOf(ans, current)
	}
	println(ans)
}


