// B

fun main()  {
    repeat(readLine()!!.toInt())    {
        val s = readLine()!!
        val n = s.length
        var ans = 0
        var i = 0
        while (i < n - 1)   {
            if (s[i] == 'v' && s[i + 1] == 'v') {
                ans++
                i += 2
            }
            else if (s[i] == 'w')   {
                ans++
                i++
            }
            else {
                i++
            }
        }
        if (s[n - 1] == 'w')
            ans++
        println(ans)
    }
}