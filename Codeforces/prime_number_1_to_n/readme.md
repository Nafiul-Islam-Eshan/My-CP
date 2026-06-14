# Prime Numbers from 1 to n
## Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J

<b><u>Sieve Algorithm: </u></b>

1. Take a boolean array with the size of (n-1)
1. using loop, set 1(true) in each index in the array.
1. However, set 0(false) in the boxes of index 0 and 1 as they are not prime numbers.
1. Use an outer loop to find out each boxes which have been set 1(true) before. 
1. After accessing each box with 1 value, use an inner loop to find its corresponding multiples and set them 0(false)
    1. This inner loop iterates from i*2 to n. 
1. Finally, our array is filtered and only prime indexes are left. Print the left index number using loop. 
