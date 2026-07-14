#include <stdio.h>
// strchr(string, searching Character); => returns address
int main()
{
    int s, isFound = 0;
    printf("Enter Size : ");
    scanf("%d", &s);

    char a[s], target;
    printf("Enter String : ");
    getchar();
    fgets(a, s, stdin);
    printf("Character You Looking for : ");
    scanf(" %c", &target);

    for (int i = 0; a[i]!='\0' ; i++)
    {
        if (a[i] == target)
        {
            isFound = 1;
            break;
        }
    }
    if(isFound) printf("Found");
    else printf("Not Found");
}