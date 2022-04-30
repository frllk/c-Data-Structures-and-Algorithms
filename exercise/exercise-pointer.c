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

///**
// * 3.输入a和b两个整数，按先大后小的顺序输出a和b. 用函数处理，而且用指针类型的数据作函数参数
// * 定义函数swap,将指向两个整型变量的指针变量所为实参传递给swap函数的形参指针变量,在函数中通过指针实现交换两个变量的值
// * */
//    void swap(int *p1, int *p2);
//    int *p1, *p2, *p, a, b; // p1,p2的类型是int*类型
//    printf("enter two integer numbers:");
//    scanf("%d,%d", &a, &b);
//    p1 = &a;
//    p2 = &b;
//    if (a < b) swap(p1, p2);
//    printf("a = %d, b = %d\n", a, b);
//    printf("max = %d, min = %d\n", *p1, *p2);

    /**
     * 4.有一个整型数组a，有10个元素，要求输出数组中的全部元素。
     * - 下标法
     * - 通过数组名计算数组元素地址,找出元素的值
     * - 用指针变量指向数组元素
     * */
////    下标法
//    int a[10];
//    int i;
//    printf("please enter 10 integer numbers:\n");
//    for (i = 0; i < 10; i++)
//        scanf("%d", &a[i]);
//    for(i = 0; i < 10; i++)
//        printf("%d,", a[i]); // 数组元素用数组名和下标表示
//    printf("\n");

//    // 通过数组名计算数组元素地址,找出元素的值
//    int a[10];
//    int i;
//    printf("please enter 10 integer numbers:\n");
//    for (i = 0; i < 10; i++)
//        scanf("%d", &a[i]);
//    for(i = 0; i < 10; i++)
//        printf("%d,", *(a+i)); // 通过数组名和元素序号计算元素地址,再找到该元素
//    printf("\n");

//    // 用指针变量指向数组元素
//    int a[10];
//    int *p, i;
//    printf("please enter 10 integer numbers:\n");
//    for (i = 0; i < 10; i++)
//        scanf("%d", &a[i]);
//    for(p = a; p < a + 10; p++)
//        printf("%d,", *p); // 用指针指向当前的数组元素
//    printf("\n");

    /**
     * 5.通过指针变量输出整型数组a的10个元素
     * 用指针变量p指向数组元素，通过改变指针变量的值，使p先后指向a[0]~a[9]各元素
     * */
//    int a[10], *p, i;
//    p = a; // p指向a[0]
//    printf("please enter 10 integer numbers:\n");
//    for (i = 0; i < 10; i++)
//        scanf("%d", p++); // 输入10个整数给a[0]~a[9]
//    // 第一个循环结束之后p的指向已经改变了，指向a数组的末尾，下面循环p的起始值不是a[0], 而是a + 10
//    // ——> 所以第二个循环前需要在赋值一下 p = a;
//    p = a; // 重新使p指向a[0]
//    for(i = 0; i < 10; i++, p++)
//        printf("%d,", *p); // 想输出a[0]~a[9]
//    printf("\n");

//    /**
//     * 将字符串a复制到字符串b，然后输出字符串b
//     * */
//    // 地址法算出各元素的值：
//    char a[] = "I am a student.", b[20]; // 定义字符数组
//    int i;
//    for (i = 0; *(a+i) != '\0'; i++)
//        *(b+i) = *(a+i); // 将a[i]的值赋给b[i]
//    *(b+i) = '\0'; // 在b数组的有效字符之后加'\0'
//    printf("string a is: %s\n", a);
//    printf("string b is: ");
//    for (i = 0; b[i] != '\0'; i++)
//        printf("%c", b[i]);
//    printf("\n");
//
//    // 用指针变量处理上述问题
//    char aa[] = "I am a boy.", bb[20], *p1, *p2;
//    p1 = aa;
//    p2 = bb; // p1, p2分别指向a数组和b数组中的第一个元素
//    for (; *p1 != '\0'; p1++, p2++) // p1, p2 每次自加1
//        *p2 = *p1; // 将p1所指向的元素的值赋给p2所指向的值
//    *p2 = '\0'; // 在复制完全部有效字符后加'\0'
//    printf("string aa is: %s\n", aa);
//    printf("string bb is: %s\n", bb);

    /**
     * 用函数调用实现字符串的复制
     * 定义一个函数copy_string用来实现字符串复制的功能，在主函数中调用此函数，
     * 函数的形参和实参可以分别用字符数组名或字符指针变量。
     * */
     // 用字符数组名做形参
//    void copy_string(char from[], char to[]);
//    char a1[] = "I am a teacher.";
//    char b1[] = "You are a student.";
//    printf("string a = %s\nstring b = %s\n", a1, b1);
//    printf("\ncopy string a to string b:\n");
//    copy_string(a1, b1); // 用字符数组名作函数实参
//    printf("\nstring a = %s\nstring b = %s\n", a1, b1);
//    // %s格式输出，遇到'\0'结束，如果按照%c输出，则b1未被完全覆盖的内容是可以输出出来的
//    for (int i = 0; i < sizeof (a1); i++) {
//        printf("%c", a1[i]);
//    }
//    printf("\n");
//    for (int i = 0; i < sizeof (b1); i++) {
//        printf("%c", b1[i]);
//    }

//    // 用字符指针变量作实参
//    void copy_string(char from[], char to[]);
//    char a2[] = "I am a teacher.";
//    char b2[] = "You are a student.";
//    char *from = a2, *to = b2;
//    printf("string a = %s  b = %s\n", a2, b2);
//    printf("copy string a to string b:");
//    copy_string(from, to); // 实参为字符指针变量
//    printf("\nstring a = %s  b = %s\n", a2, b2);

//    // 用字符指针变量作形参和实参
//    void copy_string_p(char *from, char *to);
//    char *a3 = "I am a teacher."; // a3是char *型指针变量
//    char b3[] = "You are a student."; // b是字符数组
//    char *p = b3; // 使指针变量p指向b数组首元素
//    printf("string a = %s  b = %s\n", a3, b3);
//    printf("copy string a to string b:");
//    copy_string_p(a3, p); // 调用copy_string_p函数，实参为指针变量
//    printf("\nstring a = %s  b = %s\n", a3, b3);

    /**
     * 用函数求整数a和b中的大值
     * */
//     // 通过函数名调用函数
//     int max(int, int);
//     int a, b, c;
//     printf("please enter a and b: ");
//     scanf("%d %d", &a, &b);
//     c = max(a, b);
//     printf("\na=%d\nb=%d\nmax=%d\n", a, b, c);

     // 通过指针变量调用它所指的函数
    int max(int, int);
    int (*p)(int, int); // 定义指向函数的指针变量p p两侧的()不可省略，表示p先与*结合，是指针变量，然后再与后面的()结合，（）表示函数，即该指针变量指向函数
    int a, b, c;
    p = max; // 使p指向max函数   将函数max的入口地址赋给指针变量p
    printf("please enter a and b: ");
    scanf("%d %d", &a, &b);
    c = max(a, b);
    printf("\na=%d\nb=%d\nmax=%d\n", a, b, c);

    return 0;
}

int max(int a, int b) {
    return a > b ? a : b;
}

//定义函数，形参为字符指针变量
void copy_string_p(char *from, char *to) {
//    for (; *from != '\0'; from++, to++)
//        *to = *from;
//    *to = '\0';

//    // 更精炼： 先赋值后判断
//    while ((*to = *from) != '\0')
//    {to++;from++;}

    // 更精炼： 先赋值, 把*from赋给*to，然后使to和from增值
//    while ((*to++ = *from++) != '\0');

    // 更精炼：
//    while (*from != '\0') {
    while (*from) {
            *to++ = *from++;
    }
    *to = '\0';
}

// 形参作为字符数组
void copy_string(char from[], char to[]) {
    int i = 0;
    while (from[i] != '\0') {
        to[i] = from[i];
        i++;
    }
    to[i] = '\0';
}

// 定位swap函数,实现*p1和*p2互换
void swap(int *p1, int *p2) {
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}