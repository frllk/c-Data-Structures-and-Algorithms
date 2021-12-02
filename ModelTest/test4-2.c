#include <stdio.h>

char xx[50][80], (*px)[80] = xx;    // px为二维数组指针
int maxline = 0;                    // 文章的总行数
int readdat() {
    FILE *fp;
    int i = 0;
    if ((fp = fopen("test.dat", "r")) == NULL) return 1;
    while (fgets(xx[i], 80, fp) != NULL)    // 一行一行地读到xx数组中
        i++;
    maxline = i;
    fclose(fp);
    return 0;
}

// 将xx的数据写入到 test1.dat 文件中
void writedat() {
    FILE *fp;
    int i;
    fp = fopen("test1.dat", "w");
    for (i = 0; i < maxline; i++) {
        printf("%s\n", xx[i]);
        fprintf(fp, "%s\n", xx[i]);
    }
    fclose(fp);
}

// 进行替代
void encrytchar() {
    int i, j, f;
    for (i = 0; i < maxline; i++) {
        for (j = 0; xx[i][j] != '\0'; j++) {
            f = ((int)xx[i][j] * 11) % 256;
            if (((int)xx[i][j] % 2 == 0 || f <= 32) == 0)
                xx[i][j] = (char)f;
        }
    }
}
void main() {
//    八、 程序设计题（本题 20 分）（难度： 高）
//    【解析】 定义一个二维字符串数组 xx， 打开 test.dat 文件， 逐行读取数据并存放到 xx
//    数组中， 对其中所有元素进行替代运算， 最后将 xx 数组逐行写入 test1.dat 文件中

    if (readdat()) {
        printf("数据文件test.dat不能打开！\n");
        return ;
    }
    encrytchar();
    writedat();
}