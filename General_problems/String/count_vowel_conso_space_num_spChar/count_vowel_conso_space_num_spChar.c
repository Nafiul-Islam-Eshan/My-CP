#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char a[500];
    scanf("%[^\n]",a);
    int n = strlen(a), v=0, c=0, d=0, sp=0, sc=0;
    for (int i = 0; i < n; i++)
    {
        a[i] = tolower(a[i]);
        if(isalpha(a[i])){
            if(a[i]=='a' || a[i]=='e' ||a[i]=='i' || a[i]=='o' || a[i]=='u') v++;
            else c++;
        }
        else if(isdigit(a[i])) d++;
        else if(isspace(a[i])) sp++;
        else if(ispunct(a[i])) sc++;
    }
    printf("Vowel = %d\nConsonent = %d\nDigit = %d\nSpace = %d\nSpecial Character = %d",v,c,d,sp,sc);
}