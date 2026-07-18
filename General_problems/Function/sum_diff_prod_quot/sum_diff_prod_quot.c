#include<stdio.h>
int sum(int a, int b){
    return a + b;
}
int difference(int a, int b){
    return a - b;
}
int product(int a, int b){
    return a * b;
}
int quotient(int a, int b){
    return a / b;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b , sum(a,b));
    printf("%d - %d = %d\n", a, b , difference(a,b));
    printf("%d X %d = %d\n", a, b , product(a,b));
    printf("%d / %d = %d\n", a, b , quotient(a,b));
}