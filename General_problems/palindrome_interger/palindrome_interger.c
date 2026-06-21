#include<stdio.h>
int main()
{
    int n, r=0;
    scanf("%d",&n);
    int temp = n ;
    while (temp !=0)
    {
        int mod = temp % 10;
        r*=10;
        r+=mod;
        temp/=10;
    }
    printf("%d\n",r);
    if (r==n) printf("Palindrome");
    else printf("Not Palindrome");
}