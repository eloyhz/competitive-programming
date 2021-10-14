fun main()  {
    val (n, m, k) = readLine()!!.split(" ").map{ it.toInt() }
    val a = readLine()!!.split(" ").map{ it.toInt() }.toIntArray()
    val b = readLine()!!.split(" ").map{ it.toInt() }.toIntArray()
    a.sort()
    b.sort()
    var ans = 0
    var i = 0
    var j = 0
    while (i < n && j < m)  {
        val x = a[i]
        if (x - k <= b[j] && b[j] <= x + k) {
            ans++
            i++
            j++
        }
        else if (x > b[j])
            j++
        else if (x < b[j])
            i++
    }
    println(ans)
}