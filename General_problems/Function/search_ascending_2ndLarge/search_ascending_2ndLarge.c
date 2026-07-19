#include <stdio.h>

void input(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void display(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int search(int a[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == target)
        {
            printf("%d is found at %d index\n", target, i);
            return 0;
        }
    }
    printf("%d is not found\n", target);
}

void sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    
}

void max2(int a[], int n){
    sort(a,n);
    (n<2)? printf("2nd large not available") : printf("2nd large : %d",a[n-2]);
}

int main()
{
    int n, target;
    printf("Size : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter Element : ");
    input(a,n);
    printf("Target Element : ");
    scanf("%d", &target);
    search(a, n, target);
    sort(a, n);
    printf("Sorted Elements : ");
    display(a,n);
    max2(a,n);
}