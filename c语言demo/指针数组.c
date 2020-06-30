// 将若干字符串按字母顺序（由小到大）输出。

#include <stdio.h>
#include <string.h>
char sort(char *arr[6])
{
    int i, j, k;
    char *a;
    for (i = 0; i < 6; i++)
    {
        for (j = i + 1; j < 6; j++)
            if (strcmp(arr[i], arr[j]) > 0)
            {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
    }
    for (i = 0; i < 6; i++)
        printf("%s\n", arr[i]);
}
int main()
{
    char *arr[] = {"aaa", "dsac", "vweb", "gwbwe", "bergb", "jijfq"};
    sort(arr);
}