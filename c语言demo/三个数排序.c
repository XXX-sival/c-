#include <stdio.h>
int change2(int *p, int *q)
{
    int *i;
    if (*p < *q)
    {
        i = p;
        p = q;
        q = i;
        //对地址操作不行，改成对值操作就行？？？
    }
}
int change3(int *p, int *q, int *i)
{
    if (*p < *q)
        change2(p, q);
    if (*p < *i)
        change2(p, i);
    if (*q < *i)
        change2(q, i);
    printf("\n%d\n%d\n%d", *p, *q, *i);
}
int main()
{
    int *p, *q, *i, a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    p = &a;
    q = &b;
    i = &c;
    change3(p, q, i);
}