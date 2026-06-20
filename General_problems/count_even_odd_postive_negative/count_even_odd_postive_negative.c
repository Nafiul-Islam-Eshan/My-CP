#include<stdio.h>
int main()
{
    int n, even=0, odd=0, postive=0, negative=0;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if (a[i]>=0)
        {
            postive++;
            if (a[i]%2==0)
            {
                even++;
            }
            else{
                odd++;
            }
        }
        else
        {
            negative++;
            if (a[i]%2==0)
            {
                even++;
            }
            else{
                odd++;
            }
        }
        
    }
    printf("Postive = %d\n",postive);
    printf("Negative = %d\n",negative);
    printf("Even = %d\n",even);
    printf("Odd = %d\n",odd);
}