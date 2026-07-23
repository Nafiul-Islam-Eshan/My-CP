#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    gets(s);
    int first=0, last=strlen(s)-1 ;
    while (first < last)
    {
        if (s[first] != s[last])
        {
            printf("NO");
            return 0;
        }
        first++;
        last--;
    }
    printf("YES");
}