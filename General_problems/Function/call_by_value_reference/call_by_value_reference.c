#include<stdio.h>

/**
 * Difference between two methods : Call by Value passes a copy of the variable's actual value, meaning any changes made inside the function do not affect the original variable in main(). In contrast, Call by Reference passes the memory address of the variable using pointers, allowing the function to directly access and modify the original variable's data.
 */
void swapByVal(int a, int b){
    int temp = a;
    a = b;
    b = temp ;
}

void swapByRef(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("PASS BY VALUE\n");
    printf("Before Function Call: a=%d, b=%d\n",a ,b);
    swapByVal(a, b);
    printf("After Function Call: a=%d, b=%d\n",a ,b);

    printf("PASS BY REFERENCE\n");
    printf("Before Function Call: a=%d, b=%d\n",a ,b);
    swapByRef(&a, &b);
    printf("After Function Call: a=%d, b=%d",a ,b);
}