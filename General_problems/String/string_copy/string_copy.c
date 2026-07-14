#include<stdio.h>
// strcpy(destination, source);
void main()
{
    int size, i=0;
    scanf("%d ", &size );
    char s[size], d[size];
    fgets(s, size, stdin);
    
    while (s[i] != '\0')
    {
        d[i] = s[i];
        i++;
    }
    d[i] = '\0';
    printf("%s",d);
}