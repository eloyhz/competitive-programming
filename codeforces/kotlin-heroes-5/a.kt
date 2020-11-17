// A

fun main()  {
    repeat(readLine()!!.toInt())    {
        val n = readLine()!!.toInt()
        val a = readLine()!!.split(" ").map{it.toLong()}
        var best: Long = 0
        for (i in 0 until n)    {
            var count: Long = 0
            for (j in 0 until n)    {
                if (a[j] >= a[i]) 
                    count++
            }
            best = maxOf(best, count * a[i])
        }
        println(best)
    }
}