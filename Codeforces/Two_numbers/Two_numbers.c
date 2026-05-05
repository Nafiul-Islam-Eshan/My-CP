#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    float div = (float)a / (float)b;
    printf("floor %d / %d = %.0f\n", a, b, floor(div));
    printf("ceil %d / %d = %.0f\n", a, b, ceil(div));
    printf("round %d / %d = %.0f", a, b, round(div));
    return 0;
}
