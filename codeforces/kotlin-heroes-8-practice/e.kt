/*
 * Kotlin Heroes: Practice 8
 *
 * E. Erasing Zeroes
 * https://codeforces.com/contest/1570/problem/E
 *
 * Author: eloyhz
 * Date: oct/01/2021
 */



fun main()  {
    repeat(readLine()!!.toInt()) {
        val s = readLine()!!
        var ans = 0
        var flag = false 
        var count = 0
        for (i in 0..s.length - 2)  {
            if (s[i] == '0' && flag)   {
                count++;
            }
            if (s[i] == '1' && s[i + 1] == '0')
                flag = true
            else if (s[i] == '0' && s[i + 1] == '1' && flag)    {
                flag = false
                ans += count
                count = 0
            }
        }
        println(ans)
    }
}