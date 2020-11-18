fun main() {
	val grid = Array(11, {IntArray(11)})
	var n = readLine()!!.toInt()
	var ok = true
	while (n-- > 0 && ok)	{
		val (d, l, r, c) = readLine()!!.split(" ").map { it.toInt() }
		if (d == 0)	{
			if (c + l - 1 > 10)
				ok = false
			else
				for (j in c..c + l - 1)
					if (grid[r][j] == 1)	{
						ok = false
						break
					}
					else grid[r][j] = 1
		}
		else	{
			if (r + l - 1 > 10)
				ok = false
			else
				for (i in r..r + l - 1)
					if (grid[i][c] == 1)	{
						ok = false
						break
					}
					else grid[i][c] = 1
		}
	}
	println(if (ok) "Y" else "N")
}
