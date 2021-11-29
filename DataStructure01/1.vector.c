#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct Vector {
    int *data;
    int size, length;
} Vector;

struct Vector *init(int n) {
    struct Vector *v = (Vector*)malloc(sizeof(Vector)); // 动态申请内存堆区
    v->data = (int *) malloc(sizeof(int) * n);
    v->size = n;
    v->length = 0;
    return v;
}

// malloc: 申请
// calloc: 申请，初始化0
// realloc: 重新分配
int expand(Vector * v) {
    v->data = (int *) realloc(v->data, sizeof(int) * (v->size * 2));
    v->size <<= 1;
    return 1;
}

int insert(Vector *v, int ind, int val) {
    if (v == NULL) return 0;
    // if (v->length == v->size - 1) return 0;
    if (v->length == v->size - 1) {
        if (!expand(v)) return 0;
        printf("success to expand! the size = %d\n", v->size);
    }
    for (int i = v->length; i > ind; i--) {
        v->data[i] = v->data[i - 1];
    }
    v->data[ind] = val;
    v->length += 1;
    return 1;
}

int erase(Vector *v, int ind) {
    if (v == NULL) return 0;
    if (ind < 0 || ind > v->length) return 0;
    for (int i = ind; i < v->length; i ++) {
        // v->data[i] = v->data[i + 1]; 修改为下面代码
        v->data[i - 1] = v->data[i];
    }
    v->length -= 1;
    return 1;
}

void clear(Vector *v) {
    if (v == NULL) return;
    free(v->data);
    free(v);
    return;
}

void output(Vector *v) {
    if (v == NULL) return;
    printf("Vector : [");
    for (int i = 0; i < v->length; i++) {
        i && printf(" ");
        printf("%d", v->data[i]);
    }
    printf("]\n");
    return;
}

int main() {
    srand(time(0));
    #define MAX_OP 20
    Vector *v = init(MAX_OP);
    for (int i = 0; i < MAX_OP; i++) {
        int op = rand() % 2;
        int val = rand() % 100;
        int ind = rand() % (v->length + 1);
        switch(op) {
            case 0: {
                printf("insert %d at %d to Vector = %d \n", val, ind, insert(v, ind, val));
            } break;
            case 1: {
                printf("erase a iterm at %d from Vector = %d\n", ind, erase(v, ind));
            } break;
        }
        output(v), printf("\n");
    }
    #undef MAX_OP
    return 0;
}