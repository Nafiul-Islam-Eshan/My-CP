#include <stdio.h>
int sum(int a, int b)
{
    printf("%d + %d = %d",a ,b, a+b);
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a, b);
}