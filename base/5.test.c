#include <stdio.h>

int main() {
//    编码规范：百度 + Google； 阿里 + Google；
    int n;
//    while(~scanf("%d", &n)) {
//        switch (n) {
//            case 1:
//                printf("one\n");
//                break;
//            case 2:
//                printf("two\n");
//                break;
//            case 3:
//                printf("three\n");
//                break;
//            default:
//                printf("error\n");
//                break;
//        }
//    };
    while(~scanf("%d", &n)) {
        switch (n) {
            case 1:
                printf("one\n");
            case 2:
                printf("two\n");
            case 3:
                printf("three\n");
                break;
            default:
                printf("error\n");
                break;
        }
    }
    return 0;
}