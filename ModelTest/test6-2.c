#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
//    �ˡ� ��������⣨���� 20 �֣����Ѷȣ� �ߣ�
//    �������� �㷨��ƣ�
//    ����Ҫ���ܵ��ļ��ж�ȡһ���ַ��� �ж����� ASCII ��ֵ�ķ�Χ��
//    ������� 65 �� 90 ֮�䣬 ������ ASCII �����Կ�ĺ͡� ��������С�� 90�� �����
//    �ܺ���ļ��������Ӧ��Ӣ����ĸ�� ��������ͼ�ȥ 26�� �õ�һ��� ��������Ӧ��
//    Ӣ����ĸ��������ܺ���ļ��С�
//    ������� 97 �� 122 ֮�䣬 ������ ASCII �����Կ�ĺ͡� ��������С�� 122�� ����
//    ���ܺ���ļ��������Ӧ��Ӣ����ĸ�� ��������ͼ�ȥ 26�� �õ�һ��� ��������Ӧ
//    ��Ӣ����ĸ��������ܺ���ļ��С�
//    ���� ԭ����������ܺ���ļ��С�
//    ֱ����Ҫ���ܵ��ļ�����ȡ��ϡ�
// todo ������
    int key = 0;
    char c;
    char b[30], a[30];
    FILE *before, *after;
    scanf("%s", b);
    scanf("%s", a);
    scanf("%d", &key);
    before = fopen(b, "r");
    if (before == NULL)
        printf("���ļ�ʧ��");
    after = fopen(a, "w");
    if (after == NULL)
        printf("���ļ�ʧ��");
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