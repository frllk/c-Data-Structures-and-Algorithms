#include <stdio.h>

struct student {
    char num[10];
    char name[8];
    int score[3];
    float ave;
} stu[5];
int main() {
    /*
     * 八、 程序设计题（本题 20 分）（难度： 中）
     * 有5个学生，每个学生有3门课程的成绩，从键盘输入学生的数据（包括学号、姓名和3门课程成绩），
     * 计算出平均成绩，将原有数据和计算出的平均分存放在磁盘文件“stud”中。
     * */
    int i, j, sum;
    FILE *fp;
    for (int i = 0; i < 5; i++) {
        printf("\ninput score of student %d:\n", i + 1);
        printf("NO.:");
        scanf("%s", stu[i].num);
        printf("name:");
        scanf("%s", stu[i].name);
        sum = 0;
        for (j = 0; j < 3; j++) {
            printf("score %d:", j + 1);
            scanf("%d", &stu[i].score[j]);
            sum += stu[i].score[j];
        }
        stu[i].ave = sum / 3.0;
    }
    // 将数据写入文件
    fp = fopen("stud", "w");
    for (int i = 0; i < 5; ++i) {
        if (fwrite(&stu[i], sizeof (struct student), 1, fp) != 1)
            printf("file write error!\n");
        fclose(fp);
    }
    fp = fopen("stud", "r");
    for (int i = 0; i < 5; i++) {
        fread(&stu[i], sizeof (struct student),1, fp );
        printf("\n%s,%s,%d,%d,%d,%6.2f\n",
           stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].ave);
    }
    return 0;
}