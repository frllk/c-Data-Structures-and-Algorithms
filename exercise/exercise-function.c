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

//// Ⅲ：输入4个整数，找出其中最大的数。（用函数的嵌套调用来处理）
//    int max4(int a, int b, int c, int d); // 对max4做函数声明，找出4个数中的最大者
//    int a, b, c, d, max;
//    printf("Please enter 4 integer numbers:");
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    max = max4(a, b, c, d);
//    printf("max = %d\n", max);

////    Ⅳ：有5个学生坐在一起，问第5个学生多少岁，他说比第4个学生大2岁。问第4个学生岁数，他说比第3个学生大2岁。
////    问第3个学生岁数，他说比第2个学生大2岁。问第2个学生岁数，他说比第1个学生大2岁。最后问第1个学生，他说是10岁。请问第5个学生多大。
//    int age(int n); // 对age函数的声明
//    printf("No.5, age:%d\n", age(5)); // 输出第5个学生的年龄

////  Ⅴ： 用递归方法求n!
//    int fac(int n); // fac函数声明
//    int n, y;
//    printf("input a integer number:");
//    scanf("%d", &n); // 输入要求阶乘的数
//    y = fac(n);
//    printf("%d! = %d", n, y);

//// Ⅶ：输入10个数，要求输出其中值最大的元素和该数是第几个数。
//    int max(int x, int y); // 函数声明
//    int a[10], m, n, i;
//    printf("enter 10 integer numbers:");
//    for (i = 0; i < 10; i++) {
//        scanf("%d", &a[i]);
//    }
//    printf("\n");
//    for (i = 1, m = a[0], n = 0; i < 10; i++){
//        if (max(m, a[i]) > m) { // 若max函数返回的值大于m
//            m = max(m, a[i]); // max函数返回的值取代m原值
//            n = i; // 把此数组元素的序号记下来，放在n中
//        }
//    }
//    printf("The largest number is %d \n it is the %dth number.\n", m, n + 1);

////  Ⅷ：有一个一维数组score，内放10个学生成绩，求平均成绩。
//    float average(float array[10]); // 函数声明
//    float score[10], aver;
//    int i;
//    printf("input 10 scores: \n");
//    for (i = 0; i < 10; i++) {
//        scanf("%f", &score[i]);
//    }
//    printf("\n");
//    aver = average(score);
//    printf("average score is %5.2f\n", aver);

////    ⑨ 静态局部变量
//    int f(int); // 函数声明
//    int a = 2, i; // 自动局部变量
//    for(i = 0; i < 3; i++) {
//        printf("%d\n", f(a)); // 输出f(a)的值
//    }

////    10 输出1到5的阶乘值 --- 静态局部变量
//    int fac1(int n); // 函数声明
//    int i;
//    for (i = 1; i <= 5; i++) { // 先后5次调用fac1函数
//        printf("%d!=%d\n", i, fac1(i)); // 每次计算并输出i!的值
//    }

// 11. 有一个字符串,内有若干个字符,现输入一个字符,要求程序将字符串中该字符删去. ----- 用外部函数实现
// This is a C program  删掉空格
// 分别定义3个函数来输入字符串 删除字符 输出字符串并分别放在3个文件中
    extern void enter_string(char str[]);// 对函数的声明
    extern void delete_string(char str[], char ch); // 对函数的声明
    extern void print_string(char str[]); // 对函数的声明
//    以上3行声明了本函数中将要调用的已在其他文件中定义的3个函数
    char c, str[80];
    enter_string(str); // 调用在其他文件中定义的 enter_string 函数
    scanf("%c", &c); // 输入要求删除的字符
    delete_string(str, c);
    print_string(str);


    return 0;
}

int fac1(int n) {
    static int f = 1; // f保留了上次调用结束时的值
    f = f * n; // 在上次的f值基础上在乘以n
    return f; // 返回值f是n!的值
}

int f(int a) {
    auto int b = 0; // 自动局部变量
    static int c = 3; // 静态局部变量
    b +=1;
    c+=1;
    return  a + b + c;
}

// 定义average函数
float average(float array[10]) {
    int i;
    float aver, sum = array[0];
    for (i = 0; i < 10; i++) {
        sum += array[i]; // 累加学生成绩
    }
    aver = sum / 10;
    return  aver;
}


// 定义fac函数
int fac(int n) {
    int f;
    if (n < 0) { // n不能小于0
        printf("n < 0, data error!");
    } else if (n ==0 || n== 1) { // n==0或1时，n!=1
        f = 1;
    } else {
        f = fac(n - 1) * n; // n>1时，n! = n * (n - 1)
    }
    return f;
}

// 定义递归函数
int age(int n) {
    int c;
    if (n == 1) {
        c = 10;
    } else {
        c = age(n - 1) + 2; // 年龄是前一个学生的年龄加2
    }
    return c; // 返回年龄
}

// 定义max4函数，找出4个数中的最大值
int max4(int a, int b, int c, int d) {
    int maxTwo(int a, int b); // 对max2作函数声明，找出2个数中的最大者
    int m;
    m = maxTwo(a, b);
    m = maxTwo(m, c);
    m = maxTwo(m, d);
    return m;
}
// 找出2个数的最大值
int maxTwo(int a, int b) {
    return a >= b ? a : b;
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