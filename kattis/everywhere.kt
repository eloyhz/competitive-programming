// Kattis - I've Been Everywhere, Man
// https://open.kattis.com/problems/everywhere
// 26-08-2021

fun main()  {
    repeat(readLine()!!.toInt())    {
        val set = mutableSetOf<String>()
        repeat(readLine()!!.toInt())    {
            val city = readLine()!!
            set.add(city)
        }
        println(set.size)    
    }
}