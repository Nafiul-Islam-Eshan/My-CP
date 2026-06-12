#include<stdio.h>
int main()
{
    char name[50];
    double salary, totalsales;
    scanf("%s",name);
    scanf("%lf %lf",&salary, &totalsales) ;
    double percentage = (totalsales * 15) / 100;
    printf("TOTAL = R$ %.2lf", (percentage+salary));
}