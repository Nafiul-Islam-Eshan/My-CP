#include<stdio.h>
#include<string.h>
int main(){
    char num[25], idx=0;
    scanf("%s",num);
    int n = strlen(num);
    for (int i = 0; i < n; i++)
    {
        if(num[i] != '0'){
            num[idx] = num[i];
            idx++;
        }
    }
    while(idx < n){
        num[idx] = '0';
        idx++;
    }
    printf("%s",num);
    return 0;
}