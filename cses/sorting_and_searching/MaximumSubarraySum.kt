fun main()  {
    val n = readLine()!!.toInt()
    val a = readLine()!!.split(" ").map { it.toInt() }
    var ans: Long = a[0].toLong()
    var sum: Long = a[0].toLong()
    for (i in 1 until n)    {
        val x = a[i].toLong()
        sum = maxOf(x, sum + x)
        ans = maxOf(ans, sum)
    }
    println(ans)
}