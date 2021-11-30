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

// 请写一个程序，读入一个行字符串（可能包含空格）， 输出这个字符串中字符的数量。
//分隔符：空格、换行、\t
//    char str[100] = {0};
//    scanf("%s", str); // str： 数组首地址
//    printf("%s\n", str);

//    int a, b;
//    scanf("%d%d", &a, &b);
//    printf("a = %d, b = %d \n", a, b);

//    char str[100] = {0};
//    scanf("%[^\n]s", str); // []: 字符匹配集
//    printf("%s\n", str);

    char str[100] = {0};
    int ret = 0;
    while ((ret = scanf("%[^\n]s", str)) != EOF) {
        getchar();
        printf("%s ret = %d\n", str, ret);
    }
    return 0;
}