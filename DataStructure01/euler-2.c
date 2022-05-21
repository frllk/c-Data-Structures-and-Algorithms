#include <stdio.h>

int num[4000005];
int main() {
//    偶斐波那契数
    int a = 1, b = 2, ans = 0; // a: 前面那一项  b：后面那一项
    while (b < 4000000) {
        if (b % 2 == 0) {
            ans += b;
        }
        b += a;
        a = b - a;
    }
    printf("%d\n", ans);
    /*
    num[1] = 1;
    num[2] = 2;
    long long ans = 2;
    for (int i = 3; 1; i++) {
        num[i] = num[i - 1] + num[i - 2];
        if (num[i] >= 4000000) {
            break;
        }
        if (num[i] % 2 == 0) {
            ans += num[i];
        }
    }
    printf("%lld\n", ans);
    */
    return 0;
}