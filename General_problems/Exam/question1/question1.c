#include <stdio.h>
#include<ctype.h>

int main()
{
    char c;
    scanf("%c",&c);
    if (isalpha(c))
    {
        isupper(c) && printf("%c",c+32) ;
        islower(c) && printf("%c",c-32) ;
    }
    else printf("Invalid Input! Please enter an alphabet");
}