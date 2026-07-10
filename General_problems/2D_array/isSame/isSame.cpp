#include<iostream>
using namespace std;
int main()
{
    int r, c, isSame=1 ;
    scanf("%d %d",&r,&c);
    int a[r][c], b[r][c];
    printf("Enter the elements of 1st 2d array :\n");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            scanf("%d",&a[i][j]);
        }    
    }
    printf("Enter the elements of 2d 2d array :\n");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            scanf("%d",&b[i][j]);
            if (a[i][j] != b[i][j]) isSame=0;            
        }    
    }
    if(isSame) printf("Same");
    else printf("Not Same");
}