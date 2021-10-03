/*
 * Kotlin Heroes: Practice 8
 *
 * D. Reachable Numbers
 * https://codeforces.com/contest/1570/problem/D
 *
 * Author: eloyhz
 * Date: oct/01/2021
 */


fun main()  {
    var n = readLine()!!.toInt();
    val s = mutableSetOf<Int>()
    s.add(n);
    while (true)   {
        n++;
        while (n % 10 == 0)
            n /= 10;
        if (s.contains(n))
            break;
        else
            s.add(n);
    }
    println(s.size);
}