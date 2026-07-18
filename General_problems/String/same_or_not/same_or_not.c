#include<stdio.h>
#include<string.h>
int main(){
    char a[500], b[500];
    printf("1st String : ");
    scanf("%[^\n]",a);
    getchar();
    printf("2nd String : ");
    scanf("%[^\n]",b);
    if(strcmp(a,b) == 0) printf("Same");
    else printf("Not Same");
}