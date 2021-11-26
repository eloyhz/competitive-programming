fun main()  {
    repeat(readLine()!!.toInt())    {
        val s = readLine()!!
        var isEqual = true
        for (c in s)
            if (c == '>' || c == '<')   {
                isEqual = false
                break
            }
        if (isEqual)
            println('=')
        else {
            var isLower = true;
            for (c in s)
                if (c == '>')   {
                    isLower = false
                    break
                }
            if (isLower)
                println('<')
            else    {
                var isGreater = true
                for (c in s) {
                    if (c == '<')  {
                        isGreater = false
                        break
                    }
                }
                if (isGreater)
                    println('>')
                else
                    println('?')
            }
        }
    }
}