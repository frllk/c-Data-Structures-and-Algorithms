#include <stdio.h>

int main() {
    int n = 100;

    int i = 0, j = 0;
    while (i < n) {
        j++;
        i += j;
        printf("haha\n");
    }
    /*
    // 时间复杂度：O(n)
    int i = 0, j = 5;
    while (i < n) {
        i += 5;
        while (j < i) {
            j++;
            printf("%d * %d = %d\n", i, j,  i * j);
        }
    }
    */


    /*
    // 时间复杂度：O(n²)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d ", i * j);
        }
        printf("\n----------------------\n");
    }*/
    return 0;
}