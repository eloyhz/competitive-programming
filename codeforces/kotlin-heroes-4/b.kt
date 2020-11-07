/*
 * Kotlin Heroes: Episode 4
 *
 * B. Boot Camp [AC w/editorial]
 * https://codeforces.com/contest/1346/problem/B
 *
 * Author: eloyhz
 * Date: Nov/06/2020
 */

fun main()  {
    val t = readLine()!!.toInt()
    repeat(t)   {
        val input = readLine()!!.split(" ")
        val n = input[0].toInt()
        val k1 = input[1].toInt()
        val k2 = input[2].toInt()
        val s = readLine()!!
        var prev = 0
        var ans = 0

        if (s[0] == '1')    {
            prev = k1
            ans += prev
        }
        for (i in 1 until n)    {
            prev = if (s[i] == '1' && s[i - 1] == '0')
                k1
            else if (s[i] == '1' && s[i - 1] == '1')
                minOf(k2 - prev, k1)
            else
                0
            ans += prev
        }
        /*
        From editorial
        for (x in s)    {
            if (x == '1') {
                prev = min(k1, k2 - prev)
                ans += prev
            }
        }
        */
        println(ans)
    }
}