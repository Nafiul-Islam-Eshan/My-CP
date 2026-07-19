#include<stdio.h>
#include<string.h>

struct std
{
    int marks[5];
    int total;
    float avg;
    char grad[3];
};

void input(struct std *s1){
    printf("Enter Five Subject Marks : ");
    for(int i=0; i<5; i++){
        scanf("%d",&s1->marks[i]);
    }
}

int sum(struct std *s1){
    s1->total = 0;
    for (int i = 0; i < 5; i++)
    {
        s1->total += s1->marks[i];
    }
    return s1->total;
}

float avg(struct std *s1){
    return s1->avg = (float)s1->total / 5;
}

void grade(struct std *s1){
    if(s1->avg >= 80)      strcpy(s1->grad ,"A+");
    else if(s1->avg >= 75) strcpy(s1->grad ,"A");
    else if(s1->avg >= 70) strcpy(s1->grad ,"A-");
    else if(s1->avg >= 65) strcpy(s1->grad ,"B+");
    else if(s1->avg >= 60) strcpy(s1->grad ,"B");
    else if(s1->avg >= 55) strcpy(s1->grad ,"B-");
    else if(s1->avg >= 50) strcpy(s1->grad ,"C+");
    else if(s1->avg >= 45) strcpy(s1->grad ,"C");
    else if(s1->avg >= 40) strcpy(s1->grad ,"D");
    else                   strcpy(s1->grad ,"F");
}

int main(){
    struct std s1;
    input(&s1);
    printf("Total Marks = %d\n",sum(&s1));
    printf("Average Marks = %f\n",avg(&s1));
    grade(&s1);
    printf("Grade = %s\n", s1.grad);
}