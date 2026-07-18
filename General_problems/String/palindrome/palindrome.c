
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main()
{
    char a[500], b[500];
    printf("Enter String : ");
    scanf("%[^\n]", a);
    strcpy(b, a);

    int n = strlen(a);
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        char temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }
    if (strcmp(a, b) == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}