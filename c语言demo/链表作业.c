#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN sizeof(struct ToolList)

// ����һ���ṹ��(struct Tool)��ʾ����
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

//�������
void print(struct ToolList i)
{
    printf("���߱�� %-4d ���� %-6s ���� %-8.1f �۸� %-8.1f ���λ�� %-4d\n", i.tool.number, i.tool.name, i.tool.weight, i.tool.price, i.tool.position);
}
// ʵ��һ�����߼�¼�����㷨
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
// ʵ�ֹ��߲����㷨
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
        printf("�Ҳ����˹���\n");
}

void main()
{
    //  ����һ�����Ե�����
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
