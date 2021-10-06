// Kattis - Patuljci
// https://open.kattis.com/problems/patuljci
// 06-10-2021

fun main()  {
    val a = IntArray(9)
    var s = 0
    for (i in a.indices)    {
        a[i] = readLine()!!.toInt()
        s += a[i]
    }
    var t = s - 100
    for (i in a.indices)    {
        for (j in i + 1 .. a.size - 1)  {
            if (a[i] + a[j] == t)   {
                a[i] = 0
                a[j] = 0
                break
            }
        }
    }
    for (i in a.indices)    {
        if (a[i] > 0)
            println(a[i])
    }
}
