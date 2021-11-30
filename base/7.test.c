#include <stdio.h>

//回文整数  将n翻转为num
int is_reverse_num(int n) {
    int x = n, num = 0;
    while(x) {
        num = num * 10 + x % 10;
        x /= 10;
    }
    return num == n;
}
int main() {
    int n;
    scanf("%d", &n);
//    if (is_reverse_num(n)) {
//        printf("Yes\n");
//    } else {
//        printf("No\n");
//    }
    printf(is_reverse_num(n) ? "Yes\n" : "No\n");
    return 0;
}