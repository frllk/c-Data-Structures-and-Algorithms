#include <stdio.h>

int main() {
//    �ߡ� ��������⣨ ���� 15 �֣��� �Ѷ�ϵ���� �ͣ�
//    �� ������ ֱ�Ӹ�������Ķ�����⣬ ��������꣬ 2 �·�Ϊ 29 ��;����Ϊ 28 �죬 ����
//    �·���ͬ�� �涨 3��5 ��Ϊ������ 6��8 ��Ϊ�ļ��� 9��11 ��Ϊ�＾�� 1�� 2 �� 12 ��Ϊ������
    int y, m, leap, season, days;
    printf("��ݣ��·ݣ�");
    scanf("%d,%d", &y, &m);
    if ((y % 4 == 0 && y % 100 != 0) | (y % 400 == 0))
        leap = 1; // Ϊ����
    else
        leap = 0; // Ϊƽ��
    if (m >= 3 && m <= 5)
        season = 1;
    else if (m >= 6 && m <= 8)
        season = 2;
    else if (m >= 8 && m <= 11)
        season = 3;
    else
        season = 4;
    switch (m) {
        // 1��3��5��7��8��10��12�·�Ϊ31��
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:
            days = 31;
            break;
        // 4��6��9��11�·�Ϊ30��
        case 4:case 6:case 9:case 11: days = 30; break;
        case 2: days = leap == 1 ? 29 : 28;
    }
    printf("%d �� %s ����\n", y, leap == 1 ? "��": "����");
    printf("�ü�����");
    switch (season) {
        case 1: printf("����\n"); break;
        case 2: printf("�ļ�\n"); break;
        case 3: printf("�＾\n"); break;
        case 4: printf("����\n"); break;
    }
    printf("����������%d\n", days);
    return 0;
}