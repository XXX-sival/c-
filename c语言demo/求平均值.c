#include <stdio.h>
int average(int l, int a[l])
{
    int sum = 0, i;
    for (i = 0; i < l; i++)
    {
        sum += a[i];
    }
    sum /= l;
    printf("ƽ�� %d", sum);
}
int main()
{
    int i, l, a[l];
    printf("����\n");
    scanf("%d", &l);
    printf("�ɼ�\n");
    for (i = 0; i < l; i++)
    {
        scanf("%d", &a[i]);
    }
    average(l, a);
}