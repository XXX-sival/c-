// 用指向函数的指针作函数参数
// 有两个整数a和b，由用户输入1,2或3。如输入1，程序就给出a和b中大者，输入2，就给出a和b中小者，输入3，则求a与b之和。
#include <stdio.h>
int max(int a, int b)
{
    return (a > b ? a : b);
}
int min(int a, int b)
{
    return (a < b ? a : b);
}
int sum(int a, int b)
{
    return (a + b);
}
int fun(int a, int b, int (*p)(int, int))
{
    int c = (*p)(a, b);
    printf("%d", c);
}
int main()
{
    int a, b, i, (*p)(int, int), c;
    printf("输入两个整数\n");
    scanf("%d %d", &a, &b);
    printf("选择1或2或3\n");
    scanf("%d", &i);
    if (i == 1)
        fun(a, b, max);
    else if (i == 2)
        fun(a, b, min);
    else if (i == 3)
        fun(a, b, sum);
    else
        printf("error");
}
