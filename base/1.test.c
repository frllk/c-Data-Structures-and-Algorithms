#include <stdio.h>

int main() {
//    int a, b;
////    while (scanf("%d%d", &a, &b) != EOF) {
//    while (scanf("%d%d", &a, &b) != -1) {
//        printf("%d + %d = %d\n", a, b, a+ b);
//    }

    // 请使用printf函数，求解一个数字n的十进制表示的数字位数
//    1.
//    int n;
//    scanf("%d", &n);
//    printf(" has %d digits\n", printf("%d", n)); // printf返回值为输出字符的数量
//2.
//    int n;
//    scanf("%d", &n);
//    n = printf("%d", n);
//    printf(" has %d digits\n", n);
/**
 * printf函数家族
 * printf: 向标准输出
 * sprintf: 向字符数组输出
 * fprintf: 向文件输出
 *
 */
    int n1;
    char str[15];
    scanf("%d", &n1);
    int ret = sprintf(str, "%d", n1);
    printf("%d\n", ret);
    return 0;
}
