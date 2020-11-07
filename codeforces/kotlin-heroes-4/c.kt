/*
 * Kotlin Heroes: Episode 4
 *
 * C. Spring Cleaning [WA no/submitted]
 * https://codeforces.com/contest/1346/problem/C
 *
 * Author: eloyhz
 * Date: Nov/06/2020
 */

fun main()  {
    repeat(readLine()!!.toInt())    {
        val (n, k, x, y) = readLine()!!.split(" ").map{it.toInt()}
        var a = IntArray(n)
        val b = readLine()!!.split(" ")
        var sum = 0
        for (i in 0 until n) {
            a[i] = b[i].toInt()
            sum += a[i]
        }
        a.sort()
        var ans = 0
        var i = n - 1
        while (i > 0 && (sum > k * n || a[i] > k)) {
            sum -= a[i]
            a[i] = 0
            i--
            ans += x
        }
        ans += y
        println(ans)
    }
}