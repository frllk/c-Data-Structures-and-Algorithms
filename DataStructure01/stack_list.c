//
// 链栈: 实现链式栈
//

#include <stdio.h>
#include <stdlib.h>
// 链表的每个结点都是相互独立的，需要动态的申请和释放
// 定义结点
typedef struct node {
    int data; // 数据域
    struct node *next; // 指针域
} node;

// 定义栈（带虚拟头结点）
typedef struct stack {
    struct node *head; // 头结点地址
    int size; // 内部有多少个元素
} stack;

// 初始化新结点
node *get_new_node(int n) {
    node *p = (node *) malloc(sizeof(node *));
    p->data = n;
    p->next = NULL;
    return p;
}

// 初始化:  不需要传参数，没有容量上限，每个结点都是独立的
stack *init_stack() {
    stack *s = (stack *)malloc(sizeof(stack));
    s->head = get_new_node(0);
    s->size = 0;
    return s;
}
// 销毁: 先删结点，在删栈
void delete_stack(stack *s) {
    node *p = s->head;
    while (p!= NULL) {
        // 遍历并释放每一个结点
        node *q = p->next;
        free(p);
        p = q;
    }
    free(s);
}

// 入栈：不涉及容量满了需要扩容的操作, 直接申请一个新的结点放到栈中
// 头插法：插入删除获取栈顶元素，复杂度都是O(1) √   申请新结点，插入头部
// 尾插法：插入删除获取栈顶元素，复杂度都是O(n)
int push(stack *s, int x) {
    node *p = get_new_node(x);
    p->next = s->head->next;
    s->head->next = p;
    s->size++;
    return 0;
}
// 出栈
int pop(stack *s) {
    if (s->size == 0) {
        return -1; // 判断栈是否为空，为空则出栈失败
    }
    // 删除栈顶，释放空间：出的是栈顶元素，虚头的下一个元素（空间也需要释放掉）
    node *p = s->head->next;
    s->head->next = p->next;
    free(p);
    s->size--;
    return  0;
}
// 获取栈顶元素
int top(stack *s) {
    if (s->size == 0) {
        return -1;
    }
    return s->head->next->data;
}
// 打印栈
void show_stack(stack *s) {
    printf("size = %d\n", s->size);
    for(node *p = s->head->next; p != NULL; p = p->next) {
        printf("%d ", p->data);
    }
    printf("\n-------------------------\n");
}

int main() {
    int n; // 操作次数
    scanf("%d", &n);
    stack *s = init_stack(); // 不需要传参数，没有容量上限，每个结点都是独立的
    for(int i = 0; i < n; i++) {
        // 0：入栈  1：出栈  其他：获得栈顶元素
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
    return 0;
}

