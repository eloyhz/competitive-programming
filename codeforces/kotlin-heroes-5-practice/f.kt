/*
 * Kotlin Heroes 5: ICPC Round (Practice)
 *
 * F. Platforms Jumping [WA]
 * https://codeforces.com/contest/1432/problem/F
 *
 * Author: eloyhz
 * Date: Nov/05/2020
 */

fun main()  {
    var input = readLine()!!.split(" ")
    val n = input[0].toInt()
    val m = input[1].toInt()
    val d = input[2].toInt()
    input = readLine()!!.split(" ")
    val c = IntArray(m)
    val a = IntArray(n)
    var sum = 0
    for (i in 0 until m) {
        c[i] = input[i].toInt()
        sum += c[i]
    }
    for (i in 0 until n - sum) a[i] = 0
    var p = 0
    var q = 1
    for (i in n - sum until n)  {
        a[i] = p + 1
        if (q++ == c[p])    {
            q = 1
            p++
        }
    }
    var current = 0
    var ok = true
    p = 0
    var j = n - sum
    while (true) {
        val jump = current + d
        if (jump > n)   {
            break
        }
        if (p == m)    {
            ok = false
            break
        }
        for (i in jump..jump + c[p] - 1)    {
            a[i - 1] = a[j]
            if (i - 1 != j)
                a[j] = 0
            j++
        }
        current = jump + c[p] - 1
        p++
    }
    if (ok) {
        println("YES")
        for (x in a) print("$x ")
        println()
    }   else    {
        println("NO")
    }
}
