#include <stdio.h>
#include <string.h>
#define MAX 100

struct telephone {
    char name[10];
    char telno[20];
};
void search(struct telephone b[], char *x, int n);
int main() {
//    七、 程序设计题（ 本题 15 分）
//    【 解析】用一个结构体数组存放所有输入人员的姓名和电话号码。 在输入查找人姓名后，
//    从头到尾在该数组中顺序查找。 一旦找到了， 输出其电话号码， 若找到末尾仍没有该姓名的
//    元素， 则显示相应信息

    struct telephone s[MAX];
    int i = 0;
    char na[10], tel[20];
    while (1) {
        printf("输入姓名：");
        gets(na);
        if (strcmp(na, "#") == 0)
            break;
        printf("输入电话号码：");
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
    if (i < n) printf("电话号码是：%s\n", b[i].telno);
    else printf("没有找到！\n");
}