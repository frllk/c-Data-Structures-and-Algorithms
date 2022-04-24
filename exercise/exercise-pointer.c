#include <stdio.h>

int main() {
///**
// * 1. 通过指针变量访问整型变量.
// * 先定义2个整型变量,在定义2个指针变量,分别指向这两个整型变量,通过访问指针变量,可以找到它们所指向的变量,从而得到这些变量的值.
// * */
//    int a = 100, b = 10; // 定义整型变量a,b,并初始化
//    int *pointer_1, *pointer_2; // 定义指向整型数据的指针变量pointer_1,pointer_2
//    pointer_1 = &a; // 把变量a的地址赋给指针变量pointer_1
//    pointer_2 = &b; // 把变量b的地址赋给指针变量pointer_2
//    printf("a=%d, b=%d\n",a,b); // 输出变量a和b的值
//    printf("*pointer_1=%d, *pointer_2=%d\n", *pointer_1, *pointer_2); // 输出变量a和b的值

///**
// * 2.输入a和b两个整数，按先大后小的顺序输出a和b
// * 不交换整型变量的值,而是交换两个指针变量的值
// * */
//    int *p1, *p2, *p, a, b; // p1,p2的类型是int*类型
//    printf("enter two integer numbers:");
//    scanf("%d,%d", &a, &b);
//    p1 = &a;
//    p2 = &b;
//    if (a < b) { // 如果a<b, p1与p2互换
////        p = p1;
////        p1 = p2;
////        p2 = p;
//        // 不借助与第三个变量的话
//        p1 = &b;
//        p2 = &a;
//    }
//    printf("a = %d, b = %d\n", a, b);
//    printf("max = %d, min = %d\n", *p1, *p2);

/**
 * 3.输入a和b两个整数，按先大后小的顺序输出a和b. 用函数处理，而且用指针类型的数据作函数参数
 * 定义函数swap,将指向两个整型变量的指针变量所为实参传递给swap函数的形参指针变量,在函数中通过指针实现交换两个变量的值
 * */
    void swap(int *p1, int *p2);
    int *p1, *p2, *p, a, b; // p1,p2的类型是int*类型
    printf("enter two integer numbers:");
    scanf("%d,%d", &a, &b);
    p1 = &a;
    p2 = &b;
    if (a < b) swap(p1, p2);
    printf("a = %d, b = %d\n", a, b);
    printf("max = %d, min = %d\n", *p1, *p2);


    return 0;
}
// 定位swap函数,实现*p1和*p2互换
void swap(int *p1, int *p2) {
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}