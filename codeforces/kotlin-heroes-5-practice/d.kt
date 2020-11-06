/*
 * Kotlin Heroes 5: ICPC Round (Practice)
 *
 * D. Construct the String [AC]
 * https://codeforces.com/contest/1432/problem/D
 *
 * Author: eloyhz
 * Date: Nov/05/2020
 */

fun main()  {
    val t = readLine()!!.toInt()
    repeat(t)   {
        val input = readLine()!!.split(" ")
        val n = input[0].toInt()
        val a = input[1].toInt()
        val b = input[2].toInt()
        var ans = ""
        var c = 'a'
        val last = 'a' + b - 1
        for (i in  1..a)    {
            ans += c
            if (c < last) c++
        }
        for (i in a + 1 .. n)
            ans += ans[i - a - 1]
        println(ans)
    }
}