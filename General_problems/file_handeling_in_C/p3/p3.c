#include <stdio.h>

int main()
{
    FILE *readme = fopen("readme.md", "w");

    fputs("# This file content is written using C code\n", readme);
    fputs("<em>Now, I can write anything without entering the readme file</em>\n", readme);

    char str[400];
    fgets(str, 400, stdin);
    fputs(str, readme);

    fclose(readme);
}