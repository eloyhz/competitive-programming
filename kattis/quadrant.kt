// Kattis - Quadrant Selection
// https://open.kattis.com/problems/quadrant
// Date: 2021-07-01

// Kotlin
// Compile: kotlinc quadrant.kt
// Run: kotlin QuadrantKt

fun main()  {
    val x = readLine()!!.toInt()
    val y = readLine()!!.toInt()
    if (x > 0 && y > 0)
        println(1)
    else if (x < 0 && y > 0)
        println(2)
    else if (x < 0 && y < 0)
        println(3)
    else
        println(4)
}

