#include <stdio.h>

// 定义外部函数 enter_string
void enter_string(char str[80]) {
    gets(str); // 向字符数组输入字符串
}