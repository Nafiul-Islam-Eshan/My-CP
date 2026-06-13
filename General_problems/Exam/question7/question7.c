#include<stdio.h>
#include<ctype.h>
int main(){
    char c;
    scanf("%c",&c);
    c = tolower(c);
    switch (c)
    {
    case 'a':
        printf("Vowel");
        break;
    case 'e':
        printf("Vowel");
        break;
    case 'i':
        printf("Vowel");
        break;
    case 'o':
        printf("Vowel");
        break;
    case 'u':
        printf("Vowel");
        break;
    
    default:
        printf("Consonent");
        break;
    }
}