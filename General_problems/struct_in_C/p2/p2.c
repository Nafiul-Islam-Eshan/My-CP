#include <stdio.h>

typedef struct
{
    char city[50];
    char state[50];
    int zip;
} Address;

typedef struct employee
{
    char name[170];
    int id;
    Address address;
} emp;

int main()
{
    emp person1 = {"Md. Nafiul Islam",
                   1122007,
                   {"Bangladesh", "Cumilla", 3500}};
    printf("----------------- Employee Details ----------------------\n");
    printf("Name : %s\n", person1.name);
    printf("Empoyee ID : %d\n", person1.id);
    printf("City : %s\n", person1.address.city );
    printf("State : %s\n", person1.address.state );
    printf("Postal Code : %d\n", person1.address.zip);
}