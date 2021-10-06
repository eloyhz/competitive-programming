// Kattis - Spavanac
// https://open.kattis.com/problems/spavanac
// 08-10-2021

fun main()  {
    val (h, m) = readLine()!!.split(" ").map{ it.toInt() }
    var m1 = m + 15
    var h1 = h + 23
    if (m1 > 59)    {
        h1++
        m1 %= 60
    }
    h1 %= 24
    println("$h1 $m1")
}