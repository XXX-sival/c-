#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN sizeof(struct ToolList)

// 定义一个结构体(struct Tool)表示工具
struct Tool
{
    int number;
    char *name;
    float price;
    float weight;
    long int position;
};
struct ToolList
{
    struct Tool tool;
    struct ToolList *next;
};

//输出函数
void print(struct ToolList i)
{
    printf("工具编号 %-4d 名称 %-6s 重量 %-8.1f 价格 %-8.1f 存放位置 %-4d\n", i.tool.number, i.tool.name, i.tool.weight, i.tool.price, i.tool.position);
}
// 实现一个工具记录插入算法
int InsertTool(struct ToolList *L, struct Tool t)
{
    struct ToolList *p1;
    p1 = (struct ToolList *)malloc(LEN);
    p1->tool = t;
    L->next = p1;
    p1->next = NULL;
    print(*p1);
    return 0;
}
// 实现工具查找算法
struct Tool *FindTool(struct ToolList *L, char *name)
{
    int flag = 0;
    for (; L != NULL; L = L->next)
    {
        if (strcmp(L->tool.name, name) == 0)
        {
            print(*L);
            flag++;
        }
    }
    if (flag == 0)
        printf("找不到此工具\n");
}

void main()
{
    //  定义一个线性单链表
    struct ToolList a, b, c, *head, *p;
    head = p = &a;
    a.next = &b;
    b.next = &c;
    c.next = NULL;
    a.tool.number = 1;
    a.tool.name = "aaa";
    a.tool.price = 10.0;
    a.tool.weight = 50;
    a.tool.position = 10001;
    b.tool.number = 2;
    b.tool.name = "bbb";
    b.tool.price = 100.0;
    b.tool.weight = 60;
    b.tool.position = 10002;
    c.tool.number = 3;
    c.tool.name = "ccc";
    c.tool.price = 200.0;
    c.tool.weight = 80;
    c.tool.position = 10003;
    print(a);
    print(b);
    print(c);
    struct ToolList *tail = &c;
    struct Tool t = {4, "ddd", 20.0, 300, 10004};
    FindTool(head, "ddd");
    InsertTool(tail, t);
    FindTool(head, "ddd");
}
