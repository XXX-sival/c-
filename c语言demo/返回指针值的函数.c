// 返回指针值的函数
// 有a个学生，每个学生有b门课程的成绩。要求在用户输入学生序号以后，能输出该学生的全部成绩。找出其中有不及格的课程的学生及其学生号。用指针函数实现。

#include <stdio.h>
int *fun(int (*p)[4], int n)
{
    int *pt;
    pt = *(p + n);
    return (pt);
}
int main()
{
    int arr[3][4] = {30, 91, 95, 77, 59, 66, 73, 83, 95, 77, 83, 96}, *p, i, j, k, *q, m;
    scanf("%d", &i);
    p = fun(arr, i);
    for (j = 0; j < 4; j++)
    {
        printf("%4d", *(p + j));
    }
    printf("\n");
    for (k = 0; k < 3; k++)
    {
        q = fun(arr, k);
        for (m = 0; m < 4; m++)
        {
            if (*(q + m) < 60)
                printf("%d\n", k);
        }
    }
}
