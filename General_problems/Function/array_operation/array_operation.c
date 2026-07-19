#include<stdio.h>

void input(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
}

void display(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
}

void sumAvg(int a[], int n, int *sum, float *avg){
    *sum = 0;
    for (int i = 0; i < n; i++)
    {
        *sum += a[i];
    }
    *avg = (float)*sum / n;
}

void maxMin(int a[], int n, int *mx, int *mn){
    *mx = a[0], *mn = a[0];
    for (int i = 0; i < n; i++)
    {
        if(*mx < a[i]) *mx = a[i];
        if(*mn > a[i]) *mn = a[i];
    }
}

int main(){
    int n;
    printf("Size : ");
    scanf("%d",&n);
    int a[n], sum, mn, mx;
    float avg;
    printf("Enter Elements : ");
    input(a, n);
    printf("Elements are : ");
    display(a, n);
    sumAvg(a, n, &sum, &avg);
    maxMin(a,n,&mx,&mn);
    printf("\nSum = %d\n", sum);
    printf("Average = %f\n", avg);
    printf("Smallest = %d\n", mn);
    printf("Largest = %d\n", mx);
}