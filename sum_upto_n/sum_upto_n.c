#include<stdio.h>
int main(){
    int n, sum=0;
    printf("Range = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Sum from 1 to %d = %d", n, sum);
    return 0;
}

