# Can Be Triangle

### Theory: 
The sum of any two sides of a triangle is always greater than the 3rd side.

### Algorithm:
- Take a, b, c
- find the maximum length and store in ``` max ```
- Sum of other two sides, expect the max, using the equation ``` m = a+b+c-max ```
- If ` m ` is greater than ` max `, then triangle can be formed. Otherwise, Triange can't be formed. 