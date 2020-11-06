/*
 * Kotlin Heroes 5: ICPC Round (Practice)
 *
 * E. Binary String Minimizing [RTE]
 * https://codeforces.com/contest/1432/problem/E
 *
 * Author: eloyhz
 * Date: Nov/05/2020
 */

fun main()  {
    val q = readLine()!!.toInt()
    repeat(q)   {
        val input = readLine()!!.split(" ")
        val n = input[0].toInt()
        var k = input[1].toInt()
        val s = StringBuilder(readLine()!!)
        var i = 0
        while (i < n && s[i] == '0') i++
        for (j in i + 1 until n) {
            if (s[j] == '0')    {
                var r = j - i
                if (r <= k) {
                    s[i] = '0'
                    s[j] = '1'
                    i++
                    k -= r
                }
                else    {
                    r = j - k
                    s[r] = '0'
                    s[j] = '1'
                    k = 0
                }
            }
            if (k == 0) break
        }
        println(s.toString())
    }
}