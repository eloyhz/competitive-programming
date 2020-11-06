/*
 * Kotlin Heroes 5: ICPC Round (Practice)
 *
 * C. Equalize Prices Again [AC]
 * https://codeforces.com/contest/1432/problem/C
 *
 * Author: eloyhz
 * Date: Nov/05/2020
 */

import kotlin.math.ceil

fun main()  {
    val t = readLine()!!.toInt()
    repeat(t)   {
        val n = readLine()!!.toInt()
        val a = readLine()!!.split(" ")
        var sum = 0.0
        for (x in a)
            sum += x.toInt()
        println(ceil(sum / n).toInt())
    }
}