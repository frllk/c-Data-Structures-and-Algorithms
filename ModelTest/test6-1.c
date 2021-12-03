#include <stdio.h>
#include <string.h>
#define  N 4

int main() {
    /*
     * 七、 程序设计题（ 本题 15 分）（ 中）
     * 输入若干个字符串，使用指向指针的指针将这些字符串从小到大排列后依次输出。
     * 【 解析】使用一个指针数组 p 指向各个字符串后， 就可以使用冒泡排序方法对其排序了。
     * */
    char str[N][20];
    char *p[N], **pp = p, *temp;
    int i, j;
    for (i = 0; i < N; i++) {
        p[i] = str[i];
        printf("第%d个串：", i + 1);
        scanf("%s", p[i]);
    }
    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - i - 1; j++) {
            if (strcmp(p[j], pp[j + 1]) > 0) {
                temp = pp[j];
                pp[j] = pp[j + 1];
                pp[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < N; i++)
        printf("%s", pp[i]);
    printf("\n");
    return 0;
}