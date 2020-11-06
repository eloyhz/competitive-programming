/*
 * Kotlin Heroes 5: ICPC Round (Practice)
 *
 * A. A+B (Trial Problem) [AC]
 * https://codeforces.com/contest/1432/problem/A
 *
 * Author: eloyhz
 * Date: Nov/05/2020
 */

fun main()  {
    val t = readLine()!!.toInt()
    repeat(t) {
        val l = readLine()!!.split(" ")
        val a = l[0].toInt()
        val b = l[1].toInt()
        println(a + b)
    }
}