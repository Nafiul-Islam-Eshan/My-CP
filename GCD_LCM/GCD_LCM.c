#include<stdio.h>
int main(){
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    n1 = (n1>n2)? n1 : n2 ;
    int n3 = (n1>n2)? n2 : n1 ;
    while (n3 != 0)
    {
        int rem = n1 % n3;
        n1 = n3;
        n3 = rem;
    }
    int gcd = n1;
    printf("GCD = %d", gcd);

    int lcm = (n1 * n2) / gcd;
    printf("\nLCM = %d", lcm);
}