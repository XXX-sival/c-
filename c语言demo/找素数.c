#include <stdio.h>
int main()
{
    int j = 0;
    for (int i = 2; i < 100; i += 2)
    {
        for (j = i - 1; j > 1; j--)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j != 1)
        {
            continue;
        }
        printf("%d\n", i);
    }
}