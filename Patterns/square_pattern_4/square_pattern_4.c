#include <stdio.h>
int main()
{
    int n;
    char c = 'A';
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%c ", c);
            c++;
        }
        printf("\n");
    }
}