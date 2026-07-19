#include <stdio.h>

void op(int a, int b, int *s, int *d, int *p, int *q, int *r)
{
    *s = a + b;
    *d = a - b;
    *p = a * b;
    *q = (b != 0)? a / b : -1;
    *r = (b != 0)? a % b : -1; 
}

int main()
{
    int a, b, s, d, p, q, r;
    scanf("%d %d", &a, &b);
    op(a, b, &s, &d, &p, &q, &r);
    printf("Sum = %d\n", s);
    printf("Difference = %d\n", d);
    printf("Product = %d\n", p);
    (q != -1)? printf("Quotient = %d\n", q) : printf("Quotient = Undefined\n") ;
    (r != -1)? printf("Remainder = %d\n", r) : printf("Remainder = Undefined") ;
    
}