#include <stdio.h>

int main() {
//    编码规范：百度 + Google； 阿里 + Google；
    int n;
//    while(~scanf("%d", &n)) {
//        if (n == 0) {
//            printf("FOOLISH\n");
//        } else if (n > 0 && n < 60) {
//            printf("FAIL\n");
//        } else if (n >= 60 && n < 75) {
//            printf("MEDIUM\n");
//        } else if (n >= 75 && n <= 100) {
//            printf("GOOD\n");
//        }
//    }

    while(~scanf("%d", &n)) {
        if (!n) {
            printf("FOOLISH\n");
        } else if (n < 60) {
            printf("FAIL\n");
        } else if (n < 75) {
            printf("MEDIUM\n");
        } else if (n <= 100) {
            printf("GOOD\n");
        }
    }
    return 0;
}