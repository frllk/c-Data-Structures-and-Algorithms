#include <stdio.h>
#include <string.h>
#define  N 4

int main() {
    /*
     * �ߡ� ��������⣨ ���� 15 �֣��� �У�
     * �������ɸ��ַ�����ʹ��ָ��ָ���ָ�뽫��Щ�ַ�����С�������к����������
     * �� ������ʹ��һ��ָ������ p ָ������ַ����� �Ϳ���ʹ��ð�����򷽷����������ˡ�
     * */
    char str[N][20];
    char *p[N], **pp = p, *temp;
    int i, j;
    for (i = 0; i < N; i++) {
        p[i] = str[i];
        printf("��%d������", i + 1);
        scanf("%s", p[i]);
    }
    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - i - 1; j++) {
            if (strcmp(p[j], pp[j + 1]) > 0) {
                temp = pp[j];
                pp[j] = pp[j + 1];
                pp[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < N; i++)
        printf("%s", pp[i]);
    printf("\n");
    return 0;
}