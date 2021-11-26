fun main()  {
    val n = readLine()!!.toInt()
    val x = readLine()!!.split(" ").map{ it.toInt() }
    val a = IntArray(n + 1)
    for (i in x.indices)    {
        a[x[i]] = i + 1
    }
    var ans = 1
    for (i in 1..n-1)   {
        if (a[i] > a[i + 1])
            ans++
    }
    println(ans)
}