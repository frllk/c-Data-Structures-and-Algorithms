/**
 * 链表：链式存储结构
 * */
#include <stdio.h>
#include <stdlib.h>
// 链表的每个结点都是相互独立的, 每个结点都需要动态的申请和释放
// 结点结构
typedef struct node {
    int data; // 存储数据
    struct node *next; // 指向下一个结点的地址
} node;
// 链表结构
typedef struct list {
    int size; // 链表中结点数量
    struct node *head; // 虚拟头结点，指针，记录了虚拟头结点的地址
} list;

// 链表结点的初始化
node *get_new_node(int val) {
    node *p = (node *) malloc(sizeof(node));
    p->data = val;
    p->next = NULL;
    return p;
}

// 删除：链表中每个结点都是独立的，所以应该把链表中每个结点都删除，删掉之后在删掉整个链表
void delete_list(list *p) {
    node *q = p->head;
    for (int i = 0; i < p->size; i++) {
        node *t = q->next;
        free(q);
        q = t;
    }
    free(p);
}

// 操作：创建、销毁
// 创建：初始化一个空链表
list *init() {
    list *p = (list *)malloc(sizeof(list));
    p->head= get_new_node(0); // 获得一个新结点
    p->size = 0;
    return p;
}

// 打印链表
void show_list (list *l) {
    printf("-------------size = %d -----------------\n", l->size);
    for (node *p = l->head->next; p != NULL; p = p->next) {
        printf("%d->", p->data);
    }
    printf("NULL\n----------------------------\n");
}

// 插入结点：ind位置插入值为val的结点
int insert_ele(list *l, int ind, int val) {
    // 如果位置不存在，就不需要插入
    if (ind > l->size) {
        return 1;
    }
    // 找到想插入位置的之前一个元素，然后建立一个新结点，调整指针
    node *p = l->head;
    // 从前向后找到ind的前一个结点
    for (int i = 0; i < ind; i++) {
        p = p->next;
    }
    node *q = get_new_node(val); // 建立新的结点
    q->next = p->next; // 调整指针
    p->next = q;
    l->size++;
    return 0;
}

// 删除结点：
int delete_ele(list *l, int ind) {
    // 如果结点不存在，就不需要删除
    if (l->size <= ind) {
        return 1;
    }
    // 找到需要删除的这个结点的前一个结点
    node *p = l->head;
    // 从前向后找到ind的前一个结点
    for (int i = 0; i < ind; i++) {
        p = p->next;
    }
    node *q = p->next;
    p->next = q->next;
    free(q);
    l->size--;
    return 0;
}

int main() {
    int n; // 操作次数
    scanf("%d", &n);
    list *l = init();
    for (int i = 0; i < n; i++) {
        // 自己定义一些操作：0 ind val 插入（在指定的位置插入一个指定值的元素）  1 ind 删除（在指定的位置把这个元素删掉）
        int a, b;
        scanf("%d", &a);
        if (a == 0) { // 插入
            scanf("%d%d", &a, &b);
            insert_ele(l, a, b); // 在l链表中下标为a的位置插入一个元素b
        } else if (a == 1) { // 删除
            scanf("%d", &a);
            delete_ele(l, a); // 在l链表中，删除a位置的元素
        }
        show_list(l); // 打印链表结构
    }
    delete_list(l); // 删除链表
    l = NULL;
    return 0;
}
