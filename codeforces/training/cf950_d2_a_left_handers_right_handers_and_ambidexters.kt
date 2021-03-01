// Codeforces (CF950-D2-A) - Left-handers, Right-handers and Ambidexters
// https://codeforces.com/contest/950/problem/A

import kotlin.math.abs
import kotlin.math.min

fun main()  {
    val (l, r, a) = readLine()!!.split(" ").map { it.toInt() }
    var s = min(l, r)
    val d = abs(l - r)
    if (a <= d) {
        s += a
        println(s * 2)
    }   else    {
        s += d
        val r = a - d
        println(s * 2 + if (r % 2 != 0) r - 1 else r)
    }
}