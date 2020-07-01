// 有3个学生的信息，放在结构体数组中，要求输出全部学生的信息。

// #include <stdio.h>
// struct stu
// {
//     int num;
//     char name[20];
//     char sex;
//     int age;
// } arr[3] = {1, "aaa", 'F', 20, 2, "bbb", 'F', 19, 3, "ccc", 'M', 20};
// int main()
// {
//     struct stu *p = arr;
//     for (; p < arr + 3; p++)
//     {
//         printf("%d %s %c %d\n", p->num, p->name, p->sex, p->age);
//     }
// }

// 有n个结构体变量，内含学生学号、姓名和3门课程的成绩。要求输出平均成绩最高的学生的信息(包括学号、姓名、3门课程成绩和平均成绩)。

#include <stdio.h>
#define N 3
struct stu
{
    int num;
    char name[20];
    float score[N];
    float aver;
};
void input(struct stu arr[N])
{
    int i;
    for (i = 0; i < N; i++)
    {
        scanf("%d %s %f %f %f", &arr[i].num, arr[i].name, &arr[i].score[0], &arr[i].score[1], &arr[i].score[2]);
        arr[i].aver = (arr[i].score[0] + arr[i].score[1] + arr[i].score[2]) / 3.0;
    }
}
struct stu max(struct stu arr[N])
{
    int i;
    struct stu a = arr[0];
    for (i = 0; i < N; i++)
    {
        if (arr[i].aver < arr[i + 1].aver)
            a = arr[i + 1];
    }
    return a;
}
void print(struct stu a)
{
    printf("%4d %s %4.1f %4.1f %4.1f %5.2f", a.num, a.name, a.score[0], a.score[1], a.score[2], a.aver);
}
void main()
{
    struct stu arr[N], *p = arr;
    input(p);
    print(max(p));
}