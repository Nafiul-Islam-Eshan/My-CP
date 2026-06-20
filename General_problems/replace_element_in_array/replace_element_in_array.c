#include<stdio.h>
int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int x, n;
    printf("Enter nth Position : \n" );
    scanf("%d", &x);
    printf("Enter a number : \n" );
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        if (i == (x-1))
        {
            a[i] = n;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i] );
    }
}