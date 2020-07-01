// 输入两个学生的学号、姓名和成绩，输出成绩较高学生的学号、姓名和成绩

#include <stdio.h>
int main()
{
    struct student
    {
        int num;
        char name[20];
        float score;
    } a, b;
    scanf("%d %s %f", &a.num, a.name, &a.score);
    scanf("%d %s %f", &b.num, b.name, &b.score);
    if (a.score > b.score)
        printf("%2d\n %s\n %4.1f", a.num, a.name, a.score);
    else if (a.score < b.score)
        printf("%2d\n %s\n %4.1f", b.num, b.name, b.score);
    else
    {
        printf("%2d\n %s\n %4.1f\n", a.num, a.name, a.score);
        printf("%2d\n %s\n %4.1f", b.num, b.name, b.score);
    }
}