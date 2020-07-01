// 建立一个如图所示的简单链表，它由3个学生数据的结点组成，要求输出各结点中的数据。

// #include <stdio.h>
// struct chain
// {
//     int num;
//     float score;
//     struct chain *next;
// };
// void main()
// {
//     struct chain a, b, c, *head, *p;
//     head = &a;
//     p = head;
//     a.next = &b;
//     b.next = &c;
//     c.next = NULL;
//     a.num = 1;
//     b.num = 2;
//     c.num = 3;
//     a.score = 99.0;
//     b.score = 88.0;
//     c.score = 77.0;
//     for (; p != NULL; p = p->next)
//         printf("%d %4.1f\n", p->num, p->score);
// }

// 写一函数建立一个有3名学生数据的单向动态链表。

#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct chain)
struct chain
{
    int num;
    float score;
    struct chain *next;
};
struct chain *creat()
{
    int i;
    struct chain a, b, c, *p1, *p2, *head;
    p1 = (struct chain *)malloc(LEN);
    p2 = head = p1;
    scanf("%d %f", &p1->num, &p1->score);
    for (i = 0; i < 2; i++)
    {
        p1 = (struct chain *)malloc(LEN);
        p2->next = p1;
        p2 = p1;
        p2->next = NULL;
        scanf("%d %f", &p1->num, &p1->score);
    }
    return head;
}
void main()
{
    struct chain *p;
    p = creat();
    for (; p != NULL; p = p->next)
        printf("%4d %4.1f", p->num, p->score);
}
