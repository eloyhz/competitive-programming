// Codeforces (CF581-D2-A) - Vasya the Hipster
// https://codeforces.com/contest/581/problem/A

import java.lang.Integer.max
import java.lang.Integer.min

fun main()  {
    val (a, b) = readLine()!!.split(" ").map { it.toInt() }
    val d = min(a, b)
    val r = max(a, b) - d
    println("$d ${r / 2}")
}
