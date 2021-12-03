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
    /*
     * 八、 程序设计题（本题 20 分）（难度： 高）
     *  编写一个程序，调用函数readdat()实现从文件test.dat (每行的宽度均小于80个字符)中读取一篇英文文章，
     *  存入到字符串数组xx中；再调用函数encryptchar(),按下面给定的替代关系对数组xx中的所有字符进行替代，
     *  仍存入数组xx的对应的位置上；最后调用函数writedat()把结果xx输出到文件test1.dat中。
     *  替代关系：
     *  f(p) = p*11 mod 256
     *  (p是数组xx中某一个字符的ASCII值，f(p)是计算后新字符的ASCII值)
     *  如果原字符的ASCII值是偶数或计算后f(p)值小于等于32，则该字符不变，否则将f(p)所对应的字符进行替代。
     * 【解析】 定义一个二维字符串数组 xx， 打开 test.dat 文件， 逐行读取数据并存放到 xx数组中，
     * 对其中所有元素进行替代运算， 最后将 xx 数组逐行写入 test1.dat 文件中
     * */
    if (readdat()) {
        printf("数据文件test.dat不能打开！\n");
        return ;
    }
    encrytchar();
    writedat();
}