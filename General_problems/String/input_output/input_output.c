#include<stdio.h>
void main(){
    char name[100];
    /*
     * String Input Types:
     * fgets(name, sizeof(name), stdin); => safe and standard
     * scanf("%99s", name); => reads upto index 99, last index is for null character \0. it can read only a single word.Read until space is pressed
     * scanf("%99[^\n]", name); => reads upto index 99, last index is for null character \0. it can read a whole sentence. Read until enter is pressed
     */
    fgets(name, sizeof(name), stdin);
    printf("%s", name);
}