//
// Created by GuoHai on 2022/4/7.
//
#include <stdio.h>

int main() {
////    两者比较
//    float a, b, t;
//    scanf("%f,%f", &a, &b);
//    if (a > b) {
//        // 将a和b的值互换
//        t = a;
//        a = b;
//        b = t;
//    }
//    printf("%5.2f,%5.2f\n", a, b);

//// 三个值比较
//    float a, b, c, t;
//    scanf("%f %f %f", &a, &b, &c);
//    if (a > b) { // 实现ab交换
//        t = a;
//        a = b;
//        b = t;
//    }
//    if (a > c) {
//        t = a;
//        a = c;
//        c = t;
//    }
//    if (b > c) {
//        t = b;
//        b = c;
//        c = b;
//    }
//    printf("%f %f %f", a, b, c);

//    按照成绩的等级输出百分制分数段 A： >85  B: 70 ~ 84 C : 60 ~69 D: <60
    char grade;
    scanf("%c", &grade);
    printf("Your score:");
    switch (grade) {
        case 'A':
            printf("85 ~ 100\n");
//            break;
        case 'B':
            printf("70 ~ 84\n");
//            break;
        case 'C':
            printf("60 ~ 69\n");
//            break;
        case 'D':
            printf("< 60\n");
//            break;
        default:
            printf("enter data error! \n");
    }
    return 0;
}
