#include<stdio.h>
int main(){
    FILE *myFile = fopen("text.txt", "r");
    if (myFile == NULL)
    {
        printf("New file created");
        myFile = fopen("text.txt", "w");
    }
    else
    {
        printf("File Opened Successfully");
        fclose(myFile);
    }
    
}