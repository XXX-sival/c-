#include <stdio.h>

int fbnc(int f)
{
    if (f == 1 || f == 2)
    {
        return 1;
    }
    return fbnc(f - 1) + fbnc(f - 2);
}
int main()
{
    for (int f = 1, i = 1; f <= 40; f++, i++)
    {
        printf("%12d", fbnc(f));
        if (i % 4 == 0)
            printf("\n");
    }
    return 0;
}