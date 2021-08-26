// Kattis - Nasty Hacks
// https://open.kattis.com/problems/nastyhacks
// 26-08-2021

fun main()  {
    val n = readLine()!!.toInt()
    repeat(n)   {
        val (r, e, c) = readLine()!!.split(" ").map{ it.toInt() }
        if (r < e - c)
            println("advertise")
        else if (r == e - c)
            println("does not matter")
        else
            println("do not advertise")
    }
}
