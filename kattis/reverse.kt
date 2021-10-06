fun main()  {
    var n = readLine()!!.toInt()
    var ans = 0
    while (n > 0)   {
        ans = ans * 2 + n % 2
        n /= 2
    }
    println(ans)
}