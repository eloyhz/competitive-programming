# Hopper

We are given an array `a` of size `n`. At the beginning of the array, just before the ﬁrst cell, a hopper is seated. He is able to jump on the next cell and also jump over the cell. When the hopper occurs on a cell, he gets the number of candies that is written in the cell of the array `a`. The hopper wants to get as many candies as possible and ﬁnish its jumps on the last cell. It is to ﬁnd this maximal number of candies. Note that there may be a negative number of candies written in some cell.

## Input format
The ﬁrst line contains one integer `n (1 <= n <= 10^5)` - the length of the array.
The second line contains `n` integers `a_i (-10^9 <= a_i <= 10^9)` — number of candies in each cell.

## Output format
Print one integer — the maximum number of candies for the hopper to collect.

## Sample 1

### Input
```
5
4 7 6 6 6
```

### Output
```
29
```

## Sample 2
```
10
-4 -4 -5 -2 1 3 1 2 -4 -3
```

### Output
```
-2
```

