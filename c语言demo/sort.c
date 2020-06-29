#include <stdio.h>
int sort(int l, int a[l])
{
    int i, j;
    for (i = 0; i < l; i++)
    {
        for (j = i + 1; j < l; j++)
        {
            if (a[i] < a[j])
            {
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
        }
        printf("\n%d", a[i]);
    }
}
int main()
{
    int l, a[l], i;
    printf("³¤¶È\n");
    scanf("%d", &l);
    printf("Öµ\n");
    for (i = 0; i < l; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(l, a);
}