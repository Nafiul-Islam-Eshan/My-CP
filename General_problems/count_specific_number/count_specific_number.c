#include<stdio.h>
int main()
{
    int n, target, count=0;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d", &target);
    for (int i = 0; i < n; i++)
    {
        if (target == a[i])
        {
            count++;
        }
        
    }
    printf("%d ", count);
    
}