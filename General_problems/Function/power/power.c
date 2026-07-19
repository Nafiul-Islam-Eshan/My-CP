#include<stdio.h>
typedef long long ll;
ll myPow(int base, int power){
    ll result = 1;
    for (int i = 0; i < power; i++)
    {
        result *= base;
    }
    return result;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d^%d = %d",a,b,myPow(a,b));
}