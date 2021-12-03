#include <stdio.h>


int main() {
    /*
     * 七、 程序设计题（ 本题 15 分）（ 难度： 中）
     *  编写一个程序，输入两个字符串str1和str2，要求各串中无重复出现的字符，求两者的交集。若该交集非空，则输出之。
     *  【 解析】 用最简单的逐一搜索方法。 str1、 str2 为两个源串， str3 存放两者的交集，
     *  并用 count1、 count2 和 count3 分别作为这三个串的下标。 将 str1 中的每个字符取出后与
     *  str2 中所有字符逐一比较， 若相等， 则放入 str3 中;否则放弃移至下一个字符， 重复这一
     *  个过程， 直到 str1 中所有的字符都被处理完为止。
     * */
    char str1[20], str2[20], str3[20];
    // 分别作为str1，str2和str3的下标
    int count1 = 0, count2, count3 = 0;
    printf("输入str1:");
    scanf("%s", str1);
    printf("输入str2:");
    scanf("%s", str2);
    while(str1[count1] != '\0') {           // 循环遍历str1的字符
        count2 = 0;
        while (str2[count2] != '\0') {      // 循环遍历str2的字符
            if (str1[count1] == str2[count2]) {
                str3[count3] = str1[count1];
                count3++;
                break;                      // 有一次相等后退出与str2中字符的比较
            }
            count2++;
        }
        count1++;
    }
    str3[count3] = '\0';                   // str3 非空，则输出之
    if (str3[0] != '\0')
        printf("交集=%s\n", str3);
    return 0;
}