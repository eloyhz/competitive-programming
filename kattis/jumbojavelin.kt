// Kattis - Jumbo Javelin
// https://open.kattis.com/problems/jumbojavelin
// 26-08-2021

fun main()  {
    var ans = 1
    repeat(readLine()!!.toInt())    {
        ans += readLine()!!.toInt() - 1
    }
    println(ans)
}