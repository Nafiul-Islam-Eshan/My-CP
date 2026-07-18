#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[400];
    printf("Enter String : ");
    scanf("%[^\n]", a);
    int n = strlen(a);
    for (int i = 0; i <= n-1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (tolower(a[j]) > tolower(a[j+1]))
            {
                char temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }   
        }
    }
    printf("Ascending String: %s",a);
    
}