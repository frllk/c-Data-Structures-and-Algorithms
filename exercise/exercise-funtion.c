#include <stdio.h>
// 1.先编写max函数
int max (int x, int y) { // 定义max函数，有两个参数
    int z;
    z = x > y ? x : y;
    return  z;
}
//2.在编写主函数
int main() {
//   Ⅰ.输入两个整数，要求输出其中值最大者。要求用函数来找到大数
//    int max(int x, int y); // 对max函数的声明
//    int a, b, c;
//    printf("please enter tow integer numbers:");
//    scanf("%d, %d", &a, &b);
//    c = max(a, b);
//    printf("max is %d\n", c);

//    int max2(float x, float y); // 对max函数的声明
//    float a, b;
//    int c;
//    printf("please enter tow float numbers:");
//    scanf("%f, %f", &a, &b);
//    c = max2(a, b);
//    printf("max is %d\n", c);

//    Ⅱ.输入两个实数，用一个函数求出它们之和.   -------- main函数在add函数之前
//    float add(float x, float y); // 对add函数做声明
//    float a, b, c;
//    printf("Please enter a and b:");
//    scanf("%f, %f", &a, &b);
//    c = add(a, b);
//    printf("sum is %f\n", c);

// Ⅲ：输入4个整数，找出其中最大的数。（用函数的嵌套调用来处理）



    return 0;
}
// 1.先编写max函数
int max2 (float x, float y) { // 定义max函数，有两个参数
    float z; // z定义为float类型，此时返回值的类型与指定的函数类型不同
    z = x > y ? x : y;
    return  z;
}

float add(float x, float y) {
    return x + y;
}