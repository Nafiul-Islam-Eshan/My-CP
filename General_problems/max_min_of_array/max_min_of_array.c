#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf(" %d",&a[i]);
    }
    int mx = a[0], mn=a[0];
    for (int i = 0; i < n; i++)
    {
        if (mx < a[i])
        {
            mx = a[i];
        }
        if (mn > a[i])
        {
            mn = a[i];
        }   
    }
    printf("Maximum %d\n", mx);
    printf("Minimum %d", mn);
}