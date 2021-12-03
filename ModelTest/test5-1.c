#include <stdio.h>

int main() {
    /* 七、程序设计题（15分）
     * 编写一个函数，实现两个字符串的比较。
     * 即自己写一个strcmp函数，函数原型为strcmp(char *p1, char *p2)
     * 设p1指向字符串s1，p2指向字符串s2.要求当s1=s2时，返回值为0；若s1≠s2，返回
     * 它们二者第1个不同字符的ASCII码差值（如“BOY”与“BAD”，第2个字母不同，
     * ’O‘与’A‘之差为79-65=14）；如果s1>s2,则输出正值；如果s1<s2，则输出负值。
     * */
    int m;
    char str1[20], str2[20], *p1, *p2;
    printf("input two strings:\n");
    scanf("%s", str1);
    scanf("%s", str2);
    p1 = &str1[0];
    p2 = &str2[0];
    m = strcmp(p1, p2);
    printf("result:%d,\n", m);
    return 0;
}
//todo 前两个字符相同时候，后面的未比较
// 两个字符串比较函数
strcmp(char *p1, char *p2) {
    int i = 0;
    while (*(p1 + i) == *(p2 + i)) {
        if (*(p1 + i++) == '\0') return 0; // 相等时返回结果0
        // 不等时返回结果为第一个不等字符ASCII码的差值
        return *(p1 + i) - *(p2 + i);
    }
}