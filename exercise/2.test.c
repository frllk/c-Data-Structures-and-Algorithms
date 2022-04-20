#include <stdio.h>

int main() {
//    char str[] = "192.168.0.1";
//    int arr[4];
//    sscanf(str, "%d.%d.%d.%d", &arr[0], &arr[1], &arr[2], &arr[3]);
//    for (int i = 0; i < 4; i++) {
//        printf("%d\n", arr[i]);
//    }
//    char str2[20] = {0};
//    sprintf(str2, "%d.%d.%d.%d", arr[0], arr[1], arr[2], arr[3]);
//    printf("str2 = %s\n", str2);

//    练习2：请写一个程序，读入一个行字符串（可能包含空格），输出这个字符串中字符的数量
//  分隔符：空格、换行、\t
//    char str[100] = {0};
//    scanf("%s", str);
//    printf("%s\n", str);

//    int a, b;
//    scanf("%d%d", &a, &b);
//    printf("a=%d, b=%d\n", a, b);

//    char str[100] = {0};
//    scanf("%[^\n]s", str); // []：字符匹配集 除了\n
//    printf("%s\n", str);

    char str[100] = {0};
    int ret = 0;
    while (scanf("%[^\n]s", str)!= EOF) { // 除了\n之外的字符都当作可被读入的字符，读到str中。
/*
 * 数据读入的形式：流式读入，字符流，如：输入hello world，遇到\n就结束了读入，就输出了读入的字符串hello world
 * 在下一次循环的时候，因为\n没有被处理，一直保留在流的第一个位置，当再去处理第一个流的时候，第一个字符还是\n,直接结束读入
 * 所以从第二次到最后的每一次，都没有真正的读入数据，一直卡在了\n里面
 * 解决问题：干掉它
 * */
        getchar(); // 强行吞掉上一个字符，吃掉\n/
//        printf("%s\n", str);
        printf(" has %d chars!\n", printf("%s", str));
    }
    return 0;
}

