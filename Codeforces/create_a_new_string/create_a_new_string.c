#include<stdio.h>
#include<string.h>
int  main(){
    char s[1000], v[1000];
    scanf("%s %s",s ,v);
    printf("%d %d\n", strlen(s), strlen(v));
    printf("%s %s",s,v);
}