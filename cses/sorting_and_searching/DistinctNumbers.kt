fun main()  {
    val n = readLine()!!.toInt()
    val x = readLine()!!.split(" ").map{ it.toInt() }.toIntArray()
    x.sort()
    var ans = 1
    for (i in 1 until n)
        if (x[i] != x[i-1])
            ans++
    println(ans)
}