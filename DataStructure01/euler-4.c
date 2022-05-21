#include <stdio.h>

// 判断x是否为回文数
int func(int x) {
    int t = 0, r = x; // t: 倒转的结果， r：x的原始值
    while (x !=0) {
         t = t * 10 + x % 10; // 拿到x的最后一位赋值给t， 然后t * 10， 在加上x的最后一位
         x /= 10; // 把x的最后一位删掉
    }
    return t == r;
}
int main() {
//    最大回文乘积
    int ans = 0;
    for (int i = 0; i < 999; i++) {
        for (int j = i; j < 999; j++) {
            int t = i * j;
            if(func(t)) {
                if (ans < t) {
                    ans = t; // 保留最大的回文乘积
                }
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}