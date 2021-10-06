// Kattis - Booking a Room
// https://open.kattis.com/problems/bookingaroom
// 06-10-2021

fun main()  {
    val (r, n) = readInts()
    val b = BooleanArray(r)
    if (r == n)
        println("too late")
    else    {
        repeat(n)   {
            var i = readLine()!!.toInt()
            b[i - 1] = true
        }
        for (i in b.indices)
            if (!b[i])  {
                println(i + 1)
                break
            }
    }
}

fun readInts() = readLine()!!.split(" ").map({ it.toInt() })