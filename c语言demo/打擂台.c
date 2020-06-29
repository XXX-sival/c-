#include <stdio.h>
int main()
{
    int a[3][4] = {22, 55, 66, 234, 6, 45, 77, 68, 9, 880, 56, 2221}, i, j, r, c;
    int m = a[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (a[i][j] > m)
            {
                m = a[i][j];
                r = i;
                c = j;
            }
        }
    }
    printf("%d %d %d", m, r, c);
}
