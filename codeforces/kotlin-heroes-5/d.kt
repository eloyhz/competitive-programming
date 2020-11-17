// D

fun main()  {
    repeat(readLine()!!.toInt())    {
        val n = readLine()!!.toInt()
        val x = readLine()!!.split(" ").map{ it.toInt() }
        val a = Array(n) { i -> Pair(x[i], i + 1) }
        a.sortBy { it.first }
        if (n == 1) {
            println(1)
        }
        else {
            var i = 0
            var j = n - 2
            var used = 1
            print("${a[n - 1].second} ")
            while (i <= j)   {
                if (a[i].first == used)   {
                    print("${a[i].second} ")
                    i++
                    used = 1
                }
                else {
                    print("${a[j].second} ")
                    j--
                    used++

                }
            }
        }
        println()
    } 
}