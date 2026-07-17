#include<stdio.h>
// strcat(1st string, 2nd string);
void main()
{
    int i=0, j=0, size;
    printf("String Size : ");
    scanf("%d",&size);

    char a[size*2], b[size];
    
    printf("1st String : ");
    getchar();
    fgets(a, size*2, stdin);

    printf("2nd String : ");
    fgets(b, size, stdin);

    while (a[i] != '\0' && a[i] != '\n') {
        i++;
    }

    while(b[j] != '\0'){
        a[i] = b[j];
        i++;
        j++;
    }
    a[i] = '\0';
    printf("New String : %s", a);
}