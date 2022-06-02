/**
 * 顺序栈
 * */
#include <stdio.h>
#include <stdlib.h>

// 定义栈结构
typedef struct stack {
    int *data; // 存储数据的区域：可以动态扩容
    int cap, size; // cap: 容量上限  size：栈中有多少个元素
} stack;

// 生成栈: 栈->数据区 先建立栈的结构，在建立存储数据的那个结构（数据源）
// n: 容量上限
stack *init_stack(int n) {
    stack *s = (stack *)malloc(sizeof(stack)); // 开辟一个栈这么大的空间，把首地址存起来
    s->data = (int *) malloc(sizeof(int) * n); // 数据区的大小：新申请的一片空间
    s->size = 0;
    s->cap = n;
    return s;
}
// 销毁栈（与创建顺序相反）：数据区->栈的顺序反向进行销毁
void delete_stack(stack *s) {
    free(s->data);
    free(s);
}
// 入栈：顺序栈空间是有限的，需要判断有没有存满
// 存满 ----> 进行扩容操作
int push (stack *s, int val) {
    if (s->cap == s->size) {
        // 存满：扩容
        s->cap *= 2; // 容量扩为原来的2倍
        s->data = (int *) realloc(s->data, sizeof(int) * s->cap); // 数据区重迁移 s->data: 想扩容的地址
    }
    s->data[s->size] = val;
    s->size++;
    return 0;
}
// 出栈
int pop(stack *s) {
    if (s->size == 0) {
        return -1; // 无元素，不需要出栈
    }
    s->size--;
    return 0;
}
// 获取栈顶元素
int top(stack *s) {
    if (s->size == 0) {
        return -1;
    }
    return s->data[s->size - 1];
}
// 打印栈当中的所有元素
void show_stack(stack *s) {
    printf("cap: %d, size: %d\n", s->cap, s->size);
    for (int i = 0; i < s->size; i++) {
        printf("%d", s->data[i]);
    }
    printf("\n----------------\n");
}
int main() {
    int n, m; // n: 操作次数  m：容量上限
    scanf("%d%d", &n, &m);
    stack *s = init_stack(m);
    printf("s->cap: %d, s->size: %d\n", s->cap, s->size);
    // 0: 入栈  1：出栈  其他：获取栈顶元素
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        if (a == 0) {
            scanf("%d", &a);
            push(s, a);
        } else if (a == 1) {
            pop(s);
        } else {
            printf("top -> %d\n", top(s));
        }
        show_stack(s);
    }
    delete_stack(s);
    s = NULL;
    return 0;
}