#include<stdio.h>
#include<string.h>
int main(){
    char a[500];
    printf("Enter String : ");
    fgets(a, 500, stdin);
    int n = strlen(a);
    for (int i = 0, j=n-2; i < j ; i++, j--)
    {
        char temp = a[i];
        a[i] = a[j] ;
        a[j] = temp ;
    }
    printf("Reversed String : %s", a);
}