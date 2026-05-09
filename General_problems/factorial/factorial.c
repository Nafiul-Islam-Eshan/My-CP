#include<stdio.h>
int main(){
    int n, multi=1;
    printf("Number = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        multi = multi * i;
    }
    printf("%d! = %d",n , multi);
    return 0;
}




