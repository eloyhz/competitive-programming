/*
 * Kotlin Heroes: Practice 8
 *
 * A. A+B (Trial Problem) [AC]
 * https://codeforces.com/contest/1570/problem/A
 *
 * Author: eloyhz
 * Date: oct/01/2021
 */



fun main()  {
    repeat(readLine()!!.toInt()) {
        val (a, b) = readLine()!!.split(" ").map{ it.toInt() }
        println(a + b)
    }
}