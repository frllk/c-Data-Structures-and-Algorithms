#include <stdio.h>

int main() {
//// 1.用数组来处理Fibonacci数列问题
//    int i;
//    int f[20] = {1, 1}; // 对最前面两个元素f[0], f[1]赋初值1
//    for (i = 2; i < 20; i++) {
//        f[i] = f[i-2] + f[i-1]; // 先后求出f[2]~f[19]的值
//    }
//    for (i = 0; i < 20; i++) {
//        if (i % 5 == 0) printf("\n"); // 控制每输出5个数后换行
//        printf("%12d", f[i]); // 输出一个数
//    }
//    printf("\n");

//// 2. 将一个二维数组行和列的元素互换，存到另一个二维数组中去。
//    int a[2][3] = {{1,2,3}, {4,5,6}};
//    int b[3][2], i, j;
//    printf("array: a \n");
//    for (i = 0; i <= 1; i++) { // 处理a数组中的一行中各元素
//        for (j = 0; j <= 2; j++) { // 处理a数组中某一列中个元素
//            printf("%5d", a[i][j]); // 输出a数组的一个元素
//            b[j][i] = a[i][j]; // 将a数组元素的值赋给b数组相应的元素
//        }
//        printf("\n");
//    }
//    printf("arry b: \n"); // 输出b数组各元素
//    for (i = 0; i <=2; i++) { // 处理b数组中一行中各元素
//        for (j = 0; j <=1; j++) {           // 处理b数组中一列中个元素
//            printf("%5d", b[i][j]); // 输出b数组的一个元素
//        }
//        printf("\n");
//    }

////    3.输出一个已知字符串
//    char c[15] = { 'I', ' ', 'a', 'm', ' ', 'a', ' ', 's', 't', 'u', 'd', 'e', 'n', 't', '.' };
//    int i;
//    for (i = 0; i < 15; i++) {
//        printf("%c", c[i]);
//    }
//    printf("\n");

////    4.puts
//    char str[] = { "China\nBeijing" };
//    puts(str);

// 5.输入一行字符，统计其中有多少个单词，单词之间用空格隔开。
    char string[81];
    int i, num = 0, word = 0;
    char c;
    gets(string); // 输入一个字符串给字符数组string
    for (i= 0; (c=string[i]) != '\0'; i++) { // 只要字符不是'\0'就继续执行循环
        if (c == ' ') word = 0; // 如果是空格字符，使word置为0
        else if (word == 0) { // 如果不是空格字符且word原始值为0，word置为1，num累加（表示增加一个单词）
            word = 1;
            num++;
        }
    }
    printf("There are %d words in this line. \n", num); // 输出单词数

////6. 有3个字符串，要求找出其中“最大”者
//    char str[3][20]; // 定义一个二维数组
//    char string[20]; // 定义一个一维数组，作为交换字符串数组时的临时字符数组
//    int i;
//    for (i = 0; i < 3; i++) {
//        gets(str[i]); // 读入3个字符串，分别赋给str[0], str[1], str[2]
//    }
//    if (strcmp(str[0], str[1]) > 0) { // 若str[0] > str[1], 则将str[0]的值赋给string, 否则将str[1]赋给string
//        strcpy(string, str[0]);
//    } else {
//        strcpy(string, str[1]);
//    }
//    if (strcmp(str[2], string) > 0) { // 同上
//        strcpy(string, str[2]);
//    }
//    printf("\n the largest string is: \n %s\n", string); // 输出string
    return 0;
}

