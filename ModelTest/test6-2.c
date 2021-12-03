#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
//    八、 程序设计题（本题 20 分）（难度： 高）
//    【解析】 算法设计：
//    从需要加密的文件中读取一个字符， 判断它的 ASCII 码值的范围。
//    如果介于 65 到 90 之间， 则计算该 ASCII 码加密钥的和。 如果这个和小于 90， 则向加
//    密后的文件输出它对应的英文字母， 否则将这个和减去 26， 得到一个差， 将这个差对应的
//    英文字母输出到加密后的文件中。
//    如果介于 97 到 122 之间， 则计算该 ASCII 码加密钥的和。 如果这个和小于 122， 则向
//    加密后的文件输出它对应的英文字母， 否则将这个和减去 26， 得到一个差， 将这个差对应
//    的英文字母输出到加密后的文件中。
//    否则， 原样输出到加密后的文件中。
//    直到需要加密的文件被读取完毕。
// todo 看不懂
    int key = 0;
    char c;
    char b[30], a[30];
    FILE *before, *after;
    scanf("%s", b);
    scanf("%s", a);
    scanf("%d", &key);
    before = fopen(b, "r");
    if (before == NULL)
        printf("打开文件失败");
    after = fopen(a, "w");
    if (after == NULL)
        printf("打开文件失败");
    if (before != NULL && after != NULL) {
        c = fgetc(before);
        while(c != EOF) {
            if (c >= 65 && c <= 90) {
                if ((c + key) <= 90)
                    fputc(c + key, after);
                else
                    fputc(c + key - 26, after);
            } else if (c >= 97 && c <= 122) {
                if ((c + key) <= 122)
                    fputc(c + key, after);
                else
                    fputc(c + key - 26, after);
            } else
                fputc(c, after);
            c = fgetc(before);
        }
    }
    fclose(before);
    fclose(after);
    return 0;
}