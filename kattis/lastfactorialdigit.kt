// Kattis - Last Factorial Digit
// https://open.kattis.com/problems/lastfactorialdigit
// 26-08-2021

fun solve() {
    val n = readLine()!!.toInt()
    var f = 1
    for (i in 1..n) {
        f = ((f % 10) * (i % 10)) % 10
    }
    println(f)
}

fun main()  {
    repeat(readLine()!!.toInt())    {
        solve()
    }
}