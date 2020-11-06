/*
 * Kotlin Heroes 5: ICPC Round (Practice)
 *
 * B. Candies and Two Sisters [AC]
 * https://codeforces.com/contest/1432/problem/B
 *
 * Author: eloyhz
 * Date: Nov/05/2020
 */


fun main()  {
    val t = readLine()!!.toInt()
    repeat(t)   {
        var n = readLine()!!.toInt()
        if (n % 2 != 0) n++
        println(n / 2 - 1)
    }
}