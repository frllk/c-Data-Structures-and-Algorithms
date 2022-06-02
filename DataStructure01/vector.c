/**
 * 顺序表：顺序存储结构
 * */
#include <stdio.h>
#include <stdlib.h>

// 顺序表的定义
typedef  struct vector {
    int *data; // data：存储的元素
    int size, cap; // size：顺序表的长度；cap: 容量上限
} vector;

// 初始化: 初始化一个vector（动态分配的），动态分配好之后返回指针
// cnt：容量上限
vector *init (int cnt) {
    // 申请一片顺序表vector结构的空间
    vector *p = (vector *) malloc(sizeof(vector));
    p->data = (int *) malloc(sizeof(int) * cnt);
    p->size = 0;
    p->cap = cnt;
    return  p;
}
// 销毁: 先销毁后申请的空间.—— 如果先销毁p，因为p->data也是它申请的，如果销毁了p，那么p->data就访问不到了
// 释放顺序与申请顺序相反
void delete_vector(vector *p) {
    free(p->data);
    free(p);
}

// 输出顺序表中所有元素
void show_vector (vector *v) {
    printf("---------size = %d, cap = %d---------\n", v->size, v->cap);
    for (int i = 0; i < v->size; i++) {
        printf("%d ", v->data[i]);
    }
    printf("\n------------------------------\n");
}

// 插入: 根据下标插入元素
int insert_ele(vector *v, int ind, int val) {
    if (ind > v->size) { // 1.如果插入位置大于表中的元素，中间会隔个数字
        return 1; // 插入失败
    }
//    2. 判断容量是否达到上限。 如果容量存满了则扩容，扩容到原来的2倍
    if (v->size == v->cap) {
        v->cap *= 2; //扩容： 容量上限变为原来的2倍
        // realloc(①, ②); realloc会将后面第一个参数的空间重新分配为第二个参数的大小。如果可以直接申请就直接申请，如果不能，会申请一片新的空间，在将原本的数据移过去
        v->data = (int *)realloc(v->data, sizeof(int) * v->cap);
    }
    // 3.移动元素：将后面的元素依次向后移动
    for (int i = v->size; i > ind; i--) {
        v->data[i] = v->data[i-1];
    }
    v->data[ind] = val; // 在下标ind位置插入元素val
    v->size++; // 4. 修改size值
    return 0; // 插入成功
}
/**
 * 删除元素
 * v: 要删除的顺序表
 * ind：要删除元素的下标
 * */
int delete_ele(vector *v, int ind) {
    // 1. 判断要删除的元素是否存在
    if (v->size <= ind ) {
        return 1;// 删除失败
    }
    // 2. 删除：从前向后覆盖元素
    for (int i = ind; i < v->size - 1; i++) {
        v->data[i] = v->data[i + 1]; // 将后面的值存到前面，进行覆盖
    }
    // 3. 修改size的值
    v->size--;
    return 0; // 删除成功
}


/**
 * 操作
 * 0：插入， 在ind位置插入val
 * 1：删除，删除ind位置的元素
 * */
int main() {
    int n, cnt; // n: 操作次数，cnt：容量上限
    scanf("%d%d", &n, &cnt);
    vector *v = init(cnt); // 初始化
    for (int i = 0; i < n; i++) {
        int a, b;
        scanf("%d", &a); // 是要插入还是删除
        if (a == 0) { // 插入
            scanf("%d%d", &a, &b); // ind:a val:b
            insert_ele(v, a, b); // 在顺序表v中，下标为a的位置插入一个元素b. ———— 无法”飞跃“插入
        } else if (a == 1) { // 删除 ind:a
            scanf("%d", &a); // 输入要删除的元素下标
            delete_ele(v, a); // 在顺序表v中, 删除下标为a的位置元素
        }
        show_vector(v); // 每次操作完之后，打印顺序表
    }
    delete_vector(v); // 销毁
    v = NULL;
    return 0;
}

