# GCD
## Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L

``` 
GCD(a, b) = GCD(b, (a mod b)) [a > b]
```

<big><u>Algorithm: </u></big>

1. take two input and store to `a` and `b`;
2. Compare `a` and `b` to figour out big and small value. Then, store them new containers `big`, `small`.
3. Find the remainder when `big` is divided by `small` (big mod small). Store the remainder in `r` container
1. store small number in the `big` container.
1. store the remainder stored in `r` in the `small` container.
1. Repeat steps 3, 4, 5 until the value of the container `small` is 0.
1. Once the small ended up to 0, the value of the big is GCD.