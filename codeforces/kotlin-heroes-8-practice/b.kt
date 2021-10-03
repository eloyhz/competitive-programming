/*
 * Kotlin Heroes: Practice 8
 *
 * B. Yellow Cards
 * https://codeforces.com/contest/1570/problem/B
 * 
 * Author: eloyhz
 * Date: oct/03/2021
 */

fun main() {
    var a1 = readInt()
    var a2 = readInt()
    var k1 = readInt()
    var k2 = readInt()
    val n = readInt()
    if (k1 > k2)    {
        k1 = k2.also { k2 = k1 }
        a1 = a2.also { a2 = a1 }
    }
    val min = maxOf(0, n - (a1 * (k1 - 1) + a2 * (k2 - 1)))
    var max =   if (n >= a1 * k1)
                    a1 + (n - a1 * k1) / k2
                else
                    n / k1
    println("$min $max")
}

fun readInt() = readLine()!!.toInt()
