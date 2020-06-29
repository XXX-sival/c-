#include <stdio.h>
#include <string.h>
int main()
{
    char a[3][10], str[10];
    int i, j;
    for (i = 0; i < 3; i++)
        gets(a[i]);
    strcpy(str, a[0]);
    if (strcmp(a[0], a[1]) < 0)
        strcpy(str, a[1]);
    if (strcmp(str, a[2]) < 0)
        strcpy(str, a[2]);
    printf("max is : %s", str);
}