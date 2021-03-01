// Kattis - R2
// https://open.kattis.com/problems/r2

fun main()  {
    // s = (r1 + r2) / 2
    // s * 2 = r1 + r2
    // r2 = s * 2 - r1
    val (r1, s) = readLine()!!.split(" ").map{ it.toInt() }
    println(s * 2 - r1)
}
