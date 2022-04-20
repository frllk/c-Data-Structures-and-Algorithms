#include <stdio.h>

int main() {
//    // 将华氏法表示的温度（如64°F），转换为以摄氏法表示的温度（如17.8°C）——转换公式 C = 5/9(f-32)
//    float f, c; // 定义f和c为单精度浮点型变量
//    f = 64.0;
//    c = (5.0/9)*(f-32);
//    printf("f=%f\nc=%f", f, c);
//    int a, b;
//    while(scanf("%d%d", &a, &b) != EOF) { // EOF: 文件描述符 end of file  EOF => -1
//        printf("%d + %d = %d\n", a, b, a + b);
//    }
//    int n;
//    scanf("%d", &n);
//    printf(" has %d digits\n", printf("%d", n)); // printf函数返回输出字符的数量

////  练习1：  使用printf函数，求解一个数字n的十进制表示的数字位数
//    int n;
//    scanf("%d", &n);
//    n = printf("%d", n);
//    printf(" has %d digtis\n", n);

    int n;
    char str[15];
    scanf("%d", &n);
    int ret = sprintf(str, "%d", n);
    printf("%d\n", ret);
    return 0;
}

