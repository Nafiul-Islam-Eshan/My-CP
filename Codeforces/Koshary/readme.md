# Koshary
Problem Link: https://codeforces.com/contest/2227/problem/A

### Algorithm:
1. Read an integer ```   test_cases ```  which represents how many pairs of points you need to check.
1. Create a 2D array named ` points ` with ` test_cases ` number of rows and 2 columns to store the pairs of cartesian point (x, y).
1. Outer loop iterates ` (test_cases - 1) ` times and inner loop iterates 2 times. As a result of this, ` points ` 2D array can store pair of cartesian points.
1. Loop through each pair of cartesian points in the 2D array :-</br>
    - Check if first or second element is divisible by 2 or not. 
        - If yes, then print "Yes"
        - If no, then print "No"