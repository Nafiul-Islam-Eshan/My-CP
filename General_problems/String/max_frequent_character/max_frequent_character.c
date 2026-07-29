#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[1000], maxchar;
    int count[256], maxcount = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", a);
    int n = strlen(a);
    for (int i = 0; i < 256; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        int ascii = a[i];
        count[ascii]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (maxcount < count[a[i]])
        {
            maxcount = count[a[i]];
            maxchar = a[i];
        }
    }
    printf("Maximum Frequency = %d\n", maxcount);
    printf("Maximum Character = %c", maxchar);
}