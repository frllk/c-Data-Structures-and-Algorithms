#include <stdio.h>

int main() {
//    int i =1;
//    while(i < 101) {
//        printf("%d\n", i++);
//    }
//    do {
//        printf("%d\n", i++);
//    } while (i <= 100);

//    int i =1;
//    for(int i =1; i < 101; i++) {
//        printf("%d\n", i);
//    }

//    for(int i =1; i < 101; i++) {
//        if (i % 2 != 0) continue;
//        printf("%d\n", i);
//    }

    for(int i =0; i < 101; i++) {
        if (i % 2) break;
        printf("%d\n", i);
    }
    return 0;
}