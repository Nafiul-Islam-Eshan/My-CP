#include<stdio.h>
#include<string.h>

int main(){
    char f1[500], l1[500], f2[500], l2[500];
    scanf("%s %s", f1, l1);
    scanf("%s %s",f2 , l2);
    if (!strcmp(l1 ,l2))  printf("ARE Brothers");
    else printf("NOT");
    return 0;
}