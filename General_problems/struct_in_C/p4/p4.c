#include<stdio.h>

typedef struct
{
    char name[100];
    int id;
    float cgpa;
} student;

void display( student  s1){
    printf("%s\n",s1.name);
    printf("%d\n",s1.id);
    printf("%f\n",s1.cgpa);
}

int main(){
    student s = {"Md. Nafiul Islam", 1122007, 4.00};
    display(s);
}