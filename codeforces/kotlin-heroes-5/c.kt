// C

import kotlin.math.floor

fun main()  {
    repeat(readLine()!!.toInt())    {
        val (n, k) = readLine()!!.split(" ").map{ it.toInt() }
        val p = readLine()!!.split(" ").map{ it.toInt() }
        var best = 0
        var x = n
        while (x > 0)   {
            var free = floor( x.toDouble() / k.toDouble() ).toInt()
            var sum = 0
            for (i in n - x until n - x + free) {
                sum += p[i]
            }
            best = maxOf(best, sum)
            x--
        }
        println(best)
    }
}