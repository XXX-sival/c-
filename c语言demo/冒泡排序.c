#include <stdio.h>
int main()
{
    int a[10] = {2, 4, 3, 1, 67, 344, 8, 55, 9, 7}, i;
    for (i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (a[i] > a[j])
            {
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
        }
    }
    for (i = 0; i < 10; i++)
        printf("%d\t", a[i]);
}