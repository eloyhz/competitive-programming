// Kattis - Jack-O'-Lantern Juxtaposition
// https://open.kattis.com/problems/jackolanternjuxtaposition
// 26-08-2021

fun main()  {
    val (n, t, m) = readLine()!!.split(" ").map{ it.toInt() }
    println(n * t * m)
}