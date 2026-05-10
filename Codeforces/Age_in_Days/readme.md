# Problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R

### <u>Algorithm:</u>
1. Read days in ` d ` variable
1. In the problemset, 365 days is a year. So the quotient of ` d / 365 ` is the year and remainder ` d % 365 ` is the remaining days. 
1. Now dividing the remaining days by 30 come up with quotient and reaminder. This quotient `( d % 365) / 30 ` is the month and remainder `( d % 365) % 30 ` the remaining days.
1. Print respectively year month day as showed in the problemset.