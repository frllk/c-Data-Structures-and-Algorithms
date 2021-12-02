#include <stdio.h>

int main() {
//    七、 程序设计题（ 本题 15 分）（ 难度系数： 低）
//    【 解析】 直接根据闰年的定义求解， 如果是闰年， 2 月份为 29 天;否则为 28 天， 其他
//    月份相同。 规定 3～5 月为春季， 6～8 月为夏季， 9～11 月为秋季， 1、 2 和 12 月为冬季。
    int y, m, leap, season, days;
    printf("年份，月份：");
    scanf("%d,%d", &y, &m);
    if ((y % 4 == 0 && y % 100 != 0) | (y % 400 == 0))
        leap = 1; // 为闰年
    else
        leap = 0; // 为平年
    if (m >= 3 && m <= 5)
        season = 1;
    else if (m >= 6 && m <= 8)
        season = 2;
    else if (m >= 8 && m <= 11)
        season = 3;
    else
        season = 4;
    switch (m) {
        // 1、3、5、7、8、10、12月份为31天
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:
            days = 31;
            break;
        // 4、6、9、11月份为30天
        case 4:case 6:case 9:case 11: days = 30; break;
        case 2: days = leap == 1 ? 29 : 28;
    }
    printf("%d 年 %s 闰年\n", y, leap == 1 ? "是": "不是");
    printf("该季节是");
    switch (season) {
        case 1: printf("春季\n"); break;
        case 2: printf("夏季\n"); break;
        case 3: printf("秋季\n"); break;
        case 4: printf("冬季\n"); break;
    }
    printf("当月天数：%d\n", days);
    return 0;
}