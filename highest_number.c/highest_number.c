#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a>b && a>c) printf("Highest = %d",a);
    else if(b>c) printf("Highest = %d",b);
    else printf("Highest = %d",c);
    return 0;
}