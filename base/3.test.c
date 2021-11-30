#include <stdio.h>
#include <math.h>

int main() {
//    int a = 0, b = 0;
//    printf("a++ = %d\n", a++); // 后置++
//    printf("++b = %d\n", ++b); // 前置++

//    二进制转10进制
//10010 =》 1*2的4次方 + 0*2的3次方 + 0*2的2次方 + 1*2的1次方 + 0*2的0次方
//    10进制转二进制 =》 短除法（除2）   从下往上写

//    printf("3 & 2 = %d\n", 3 & 2);
//    printf("3 & 2 = %d\n", 3 ^ 2);
//    printf("3 | 2 = %d\n", 3 | 2);
//    printf("~3 = %d\n", ~3);

// 请写一个程序，输入一个数字x，输出数字x的立方根
//    double x;
//    scanf("%lf", &x);
//    printf("%.2lf\n", pow(x, 1.0 / 3));

    int a, b;
//  while(scanf("%d%d", &a, &b) != -1) {
//  while(scanf("%d%d", &a, &b) != EOF) {
    while(~scanf("%d%d", &a, &b)) {
        printf("a = %d, b = %d\n", a, b);
//        int temp = a;
//        a = b;
//        b = temp;

        a ^= b;
        b ^= a; // 同 aa = a ^ b; b = b ^ aa; (b = b ^ a ^ b)
        a ^= b; // 同 bb = a; a = aa ^ bb; (a = a ^ b ^ a  => a = b)

        printf("swap: a = %d, b = %d\n", a, b);
    }
    return 0;
}