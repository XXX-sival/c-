// 有3个候选人，每个选民只能投票选一人，要求编一个统计选票的程序，先后输入被选人的名字，最后输出各人得票结果。

// #include <stdio.h>
// #include <string.h>
// struct Candidate
// {
//     char name[20];
//     int vote;
// } cand[3] = {"a", 0, "b", 0, "c", 0};
// int main()
// {
//     int i, j;
//     char vote[20];
//     for (i = 0; i < 10; i++)
//     {
//         scanf("%s", vote);
//         for (j = 0; j < 3; j++)
//         {
//             if (strcmp(cand[j].name, vote) == 0)
//                 cand[j].vote++;
//         }
//     }
//     for (i = 0; i < 3; i++)
//     {
//         printf("%s %d\n", cand[i].name, cand[i].vote);
//     }
//     printf("invalid %d", 10 - cand[0].vote - cand[1].vote - cand[2].vote);
// }

// 有n个学生的信息(包括学号、姓名、成绩)，要求按照成绩的高低顺序输出各学生的信息。
#include <stdio.h>
int main()
{
    struct information
    {
        int NO;
        char name[20];
        float score;
    } stu[5];
    int i, j;
    for (i = 0; i < 5; i++)
        scanf("%d %s %f", &stu[i].NO, stu[i].name, &stu[i].score);
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (stu[i].score < stu[j].score)
            {
                struct information mid = stu[i];
                stu[i] = stu[j];
                stu[j] = mid;
            }
        }
        printf("%2d %s %4.1f\n", stu[i].NO, stu[i].name, stu[i].score);
    }
}