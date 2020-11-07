/*
 * Kotlin Heroes: Episode 4
 *
 * A. Color Revolution [AC]
 * https://codeforces.com/contest/1346/problem/A
 *
 * Author: eloyhz
 * Date: Nov/06/2020
 */

fun main() {
    val t = readLine()!!.toInt()
    repeat(t)   {
        val input = readLine()!!.split(" ")
        val n = input[0].toInt()
        val k = input[1].toInt()
        val n1 = n / (1 + k + k * k + k * k * k)
        val n2 = k * n1
        val n3 = k * n2
        val n4 = k * n3
        println("$n1 $n2 $n3 $n4")
    }
}