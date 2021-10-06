// Kattis - Pizza Crust
// https://open.kattis.com/problems/pizza2
// 06-10-2021

import kotlin.math.PI

fun main()  {
    val (r, c) = readLine()!!.split(" ").map{ it.toInt() }
    val total_area = PI * r * r
    val cheese_area = PI * (r - c) * (r - c)
    val ans = cheese_area / total_area * 100
    println("%.6f".format(ans))
}