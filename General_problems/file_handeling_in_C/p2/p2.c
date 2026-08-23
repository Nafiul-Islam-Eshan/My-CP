#include <stdio.h>
int main()
{
    FILE *readme = fopen("readme.md", "r");
    char content[1000];
    if (readme == NULL)
    {
        readme = fopen("readme.md", "w");
    }
    while (fgets(content, sizeof(content), readme))
    {
        printf("%s", content);
    }
    fclose(readme);
}