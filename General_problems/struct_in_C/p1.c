#include<stdio.h>

typedef struct{
    char name[100];
    int age;
    int salary;
} employee;

int main(){
    int n;
    printf("Enter the Number of Employees :");
    scanf("%d", &n);
    employee e[n];
    printf("Enter name, age, and salary of employees: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d", &e[i].name, &e[i].age, &e[i].salary);
    }
    
    printf("------------------ Employee name, age, and salary -------------------\n");
    for (int i = 0; i < n; i++)
    {
        printf("Name : %s\nAge : %d\nSalary : %d\n\n", &e[i].name, &e[i].age, &e[i].salary);
    }
    

}