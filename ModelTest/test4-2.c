#include <stdio.h>

char xx[50][80], (*px)[80] = xx;    // pxΪ��ά����ָ��
int maxline = 0;                    // ���µ�������
int readdat() {
    FILE *fp;
    int i = 0;
    if ((fp = fopen("test.dat", "r")) == NULL) return 1;
    while (fgets(xx[i], 80, fp) != NULL)    // һ��һ�еض���xx������
        i++;
    maxline = i;
    fclose(fp);
    return 0;
}

// ��xx������д�뵽 test1.dat �ļ���
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

// �������
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
//    �ˡ� ��������⣨���� 20 �֣����Ѷȣ� �ߣ�
//    �������� ����һ����ά�ַ������� xx�� �� test.dat �ļ��� ���ж�ȡ���ݲ���ŵ� xx
//    �����У� ����������Ԫ�ؽ���������㣬 ��� xx ��������д�� test1.dat �ļ���

    if (readdat()) {
        printf("�����ļ�test.dat���ܴ򿪣�\n");
        return ;
    }
    encrytchar();
    writedat();
}