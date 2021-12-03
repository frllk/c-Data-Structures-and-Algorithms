#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
//    八、 程序设计题（本题 20 分）（难度： 中高）
//    【解析】
//    算法设计:
//    建立三个 int 型的长度为 21 的数组 a1、 a2 和 a3， 初始化为 0。 从键盘中读取整数 n，
//    读取整数 m， 将 n 存到 a1[m]中， 直到第一行整数输入结束。 再读取第二行整数， 按例存放
//    到数组 a2 中。 然后， 将 a1 和 a2 对应元素相加， 并存放到 a3 的相应位置。 最后， 输出 a3
//    中的非 0 元素及其下标。
// todo 看不懂
    int a1[21] = { 0 }, a2[21] = { 0 }, a3[21] = { 0 };
    int n = 0, m = 0, j = 1;
    do {
        scanf("%d", &m);
        if (j %2 == 1) n = m;
        else a1[m] = n;
        j++;
    } while (getchar() == ' ');
    do {
        scanf("%d", &m);
        if (j % 2 == 1) n = m;
        else a2[m] = n;
        j++;
    } while (getchar() == ' ');
    for (j = 20; j >= 0; j--) {
        a3[j] = a1[j] + a2[j];
        if (a3[j] != 0) {
            printf("%d %d", a3[j], j);
        }
    }
    return 0;
}