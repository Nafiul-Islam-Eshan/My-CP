#include <stdio.h>
#include<stdbool.h>
int main()
{
    bool isPrime = true;
    int n;
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n%i==0) isPrime = false;
    }
    if(isPrime) printf("Prime");
    else printf("Not Prime");
}