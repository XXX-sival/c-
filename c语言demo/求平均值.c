#include <stdio.h>
int average(int l, int a[l])
{
    int sum = 0, i;
    for (i = 0; i < l; i++)
    {
        sum += a[i];
    }
    sum /= l;
    printf("平均 %d", sum);
}
int main()
{
    int i, l, a[l];
    printf("人数\n");
    scanf("%d", &l);
    printf("成绩\n");
    for (i = 0; i < l; i++)
    {
        scanf("%d", &a[i]);
    }
    average(l, a);
}