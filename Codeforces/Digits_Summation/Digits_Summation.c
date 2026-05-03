#include <stdio.h>
int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);
    long long aLast = a % 10;
    long long bLast = b % 10;
    long long sum = aLast + bLast;
    printf("%lld",sum);
    return 0;
}