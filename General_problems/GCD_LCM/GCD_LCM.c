#include<stdio.h>
int main(){
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int backup_n1 = n1, backup_n2= n2;
    int big = (n1>n2)? n1 : n2 ;
    int small = (n1>n2)? n2 : n1 ;
    while (small != 0)
    {
        int rem = big % small;
        big = small;
        small = rem;
    }
    int gcd = big;
    printf("GCD = %d", gcd);

    int lcm = (backup_n1 * backup_n2) / gcd;
    printf("\nLCM = %d", lcm);
}



