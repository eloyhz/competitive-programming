// Kattis - Magic Trick
// https://open.kattis.com/problems/magictrick
// 26-08-2021

fun main() {
    val s: String = readLine()!!
    val x = IntArray(26)
    var repeated = false
    for (c in s)    {
        if (++x[c - 'a'] > 1)   {
            repeated = true
            break
        }
    }
    println(if (repeated) 0 else 1)
}