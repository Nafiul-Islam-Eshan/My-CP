#include<stdio.h>
int isEven(int n){
    if(n%2 == 0) return 1;
    else return 0;
}
int isPrime(int n){
    if(n <= 1) return 0;
    for (int i = 2; i <= n/2; i++){
        if(n%i == 0) return 0;
    }
    return 1;
}

int main(){
    int n;
    scanf("%d", &n);
    if(isEven(n)) printf("%d is even\n",n);
    else printf("%d is odd\n",n);
    if(isPrime(n)) printf("%d is prime\n"),n;
    else printf("%d is not a prime\n",n);
}