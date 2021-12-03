#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    /*
     * 八、程序设计题（20分）
     * 请使用命令行参数形式编写程序，该程序将指定文本文件中所有某个单词的出现均替换
     * 为另一个单词，经过替换后的文件信息存放于另一个文本文件中。
     * 设命令行个数为
     * replace oldfile newfile oldword newword
     * 其中，replace为命令名，oldfile、newfile、oldword和newword为命令行参数。
     * 例如，执行命令
     * c>replace file1 file2 old new<CR>
     * 的结果是将文本文件file1中的所有单词“old”替换为“new”，替换后的文件信息存放于
     * 文本文件file2中。（<CR>表示回车）
     * 要求：程序中必须有命令行的正确性检查。
     * */
//    todo 跑不出来
    char buffer[256], ch;
    char *p = buffer;
    char a = ' ';
    FILE *fp1, *fp2;
    if (argc < 5) {
        printf("\nUsage:replace oldfile newfile oldword newword\n");
        exit(1);
    }
    if((fp1 = fopen(argv[1], "r")) == NULL) {
        printf("\nCan not open file %s!\n", argv[1]);
        exit(1);
    }
    if((fp2 = fopen(argv[2], "w")) == NULL) {
        printf("\nCan not build file %s!\n", argv[2]);
        exit(1);
    }
    ch = fgetc(fp1);
    while(ch != EOF) {
        for(; ch != ' ' && ch != EOF; p++) {
            *p = ch;
            ch = fgetc(fp1);
        }
        *p = '\0';
        if (strcmp(buffer, argv[3]) == 0)
            fputs(argv[4], fp2);
        else
            fputs(argv[4], fp2);
        fputc(a, fp2);
        p = buffer;
        if (ch == EOF)
            break;
        ch = fgetc(fp1);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}