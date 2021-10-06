/*
 * Kotlin Heroes: Practice 8
 *
 * C. Shooting
 * https://codeforces.com/contest/1570/problem/C
 * 
 * Author: eloyhz
 * Date: oct/06/2021
 */


fun main()  {
    val n = readLine()!!.toInt()
    val a = readLine()!!.split(" ").map{ it.toInt() }.toIntArray()
    var s = 0
    val b = IntArray(n)
    for (x in 0 until n) {
        var maxIndex = 0
        for (i in a.indices)
            if (a[i] > a[maxIndex])
            maxIndex = i
        b[x] = maxIndex + 1
        s += a[maxIndex] * x + 1
        a[maxIndex] = 0
    }
    println(s)
    for (elem in b)
        print("$elem ")
    println()
}