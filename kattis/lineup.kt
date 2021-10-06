// Kattis - Line Them Up
// https://open.kattis.com/problems/lineup
// 06-10-2021

fun main()  {
    val n = readLine()!!.toInt()
    val a: Array<String?> = arrayOfNulls(n)
    for (i in a.indices)    {
        a[i] = readLine()!!
    }
    if (isIncreasing(a))
        println("INCREASING")
    else if (isDecreasing(a))
        println("DECREASING")
    else
        println("NEITHER")
}

fun isIncreasing(a : Array<String?>) : Boolean {
    for (i in 0 until a.size - 1)   {
        val x : String = a[i]!!
        val y : String = a[i+1]!!
        if (x > y)
            return false
    }
    return true
}

fun isDecreasing(a : Array<String?>) : Boolean {
    for (i in 0 until a.size - 1)   {
        val x : String = a[i]!!
        val y : String = a[i+1]!!
        if (x < y)
            return false
    }
    return true
}
