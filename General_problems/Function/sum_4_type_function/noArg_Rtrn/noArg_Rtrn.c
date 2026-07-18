#include <stdio.h>
int sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    return a+b;
}
int main()
{
    printf("Sum = %d\n", sum());
}