// �ú�������ʵ���ַ����ĸ���

// �ַ�����
// #include <stdio.h>
// char copy_str(char a[22])
// {
//     char b[22];
//     int i;
//     for (i = 0; *(a + i) != '\0'; i++)
//         *(b + i) = *(a + i);
//     *(b + i) = '\0';
//     printf("%s", b);
// }
// int main()
// {
//     char c[] = "Life is shit������";
//     copy_str(c);
// }

// �ַ�ָ��
// #include <stdio.h>
// char copy_str(char a[22])
// {
//     char b[22], *p1, *p2;
//     p1 = a;
//     p2 = b;
//     for (; *p1 != '\0'; p1++, p2++)
//         *p2 = *p1;
//     *p2 = '\n';
//     printf("%s", b);
// }
// int main()
// {
//     char c[22] = "Life is shit������";
//     copy_str(c);
// }

// �ַ�ָ��������βκ�ʵ�� (�������a[22] �� p1�ϳ�һ��)
// #include <stdio.h>
// char copy_str(char *a)
// {
//     char *p, b[22];
//     p = b;
//     for (; *a != '\0'; a++, p++)
//         *p = *a;
//     *p = '\n';
//     printf("%s", b);
// }
// int main()
// {
//     char *c = "Life is shit������";
//     copy_str(c);
// }