#include <stdio.h>
#include <string.h>
#define MAX 100

struct telephone {
    char name[10];
    char telno[20];
};
void search(struct telephone b[], char *x, int n);
int main() {
//    �ߡ� ��������⣨ ���� 15 �֣�
//    �� ��������һ���ṹ������������������Ա�������͵绰���롣 �����������������
//    ��ͷ��β�ڸ�������˳����ҡ� һ���ҵ��ˣ� �����绰���룬 ���ҵ�ĩβ��û�и�������
//    Ԫ�أ� ����ʾ��Ӧ��Ϣ

    struct telephone s[MAX];
    int i = 0;
    char na[10], tel[20];
    while (1) {
        printf("����������");
        gets(na);
        if (strcmp(na, "#") == 0)
            break;
        printf("����绰���룺");
        gets(tel);
        strcpy(s[i].name, na);
        strcpy(s[i].telno, tel);
        i++;
        search(s, na, i);
    }
    return 0;
}

void search(struct telephone b[], char *x, int n) {
    int i = 0;
    while (strcmp(b[i].name, x) != 0 && i < n)
        i++;
    if (i < n) printf("�绰�����ǣ�%s\n", b[i].telno);
    else printf("û���ҵ���\n");
}