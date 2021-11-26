# The Maximum in The Array
Your task is to write the piece of code that seeks the maximum in the array.
Somewhere above in the same block is declared the array `a` and the integer 
variable `n` containing the size of the array. You may assume that elements 
of the array are integers does not exceed $10^9$ by the absolute value and
$1 \leq n \leq 100$.

Remember that the elements of the array in C++ are indexed from zero.
Declare the variable `ans` and put the maximum in there. You may declare
some more variables if needed.

Note that you do not have to code any functions (including main), or read/write something.

```lang=C
int ans = a[0];
for (int i = 1; i < n; i++)	{
	if (a[i] > ans)
    	ans = a[i];
}
```