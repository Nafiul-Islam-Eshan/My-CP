#include <stdio.h>

typedef struct
{
    int real;
    int imaginary;
} complex;

int main()
{
    int n;
    printf("Enter how many complex numbers you wanna add : ");
    scanf("%d", &n);
    complex nums[n], sum = {0, 0};

    printf("Enter real and imaginary parts: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &nums[i].real, &nums[i].imaginary);
    }

    for (int i = 0; i < n; i++)
    {
        sum.real += nums[i].real ;
        sum.imaginary += nums[i].imaginary ;
    }
    
    printf("Sum of the complex numbers : %d + %di", sum.real, sum.imaginary);
}