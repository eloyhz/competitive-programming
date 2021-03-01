// Codeforces (CF467-D2-A) - George and Accommodation
// https://codeforces.com/contest/467/problem/A

fun main()  {
    var ans = 0
    repeat(readLine()!!.toInt())    {
        val (pi, qi) = readLine()!!.split(" ").map { it.toInt() }
        if (qi - pi >= 2)   {
            ans++
        }
    }
    println(ans)
}