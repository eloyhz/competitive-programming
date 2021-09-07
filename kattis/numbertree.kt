// Kattis - Numbers On a Tree
// https://open.kattis.com/problems/numbertree
// 06-09-2021

fun main()  {
    val line = readLine()!!.split(" ")
    val height = line[0].toInt()
    val s = if (line.size == 1) "" else line[1]
    var number = 1;
    for (c in s)    {
        number *= 2
        if (c == 'R')
            number++
    }
    val ans = (1 shl (height + 1)) - number
    println(ans)
}
