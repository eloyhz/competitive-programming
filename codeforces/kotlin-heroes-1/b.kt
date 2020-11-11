fun main()  {
    val n = readLine()!!.toInt()
    val a = readLine()!!.split(" ").map{it.toInt()}
    var max1 = 0
    var max2 = 0
    var ans = 0
    for (i in 0 until n)
        when {
            a[i] < max2 -> {
                ans++
            }
            a[i] > max1 ->  {
                max2 = max1
                max1 = a[i]
            }
            a[i] > max2 -> {
                max2 = a[i]
            }
        }
    println(ans)
}