fun main()  {
    repeat(readLine()!!.toInt())    {
        var (x, y) = readLine()!!.split(" ").map{ it.toInt() }
        if (x > y)  {
            val tmp = y
            y = x
            x = tmp
        }
        val a = x - 1
        val c = y - a
        val b = 1
        println("$a $b $c")
    }
}
