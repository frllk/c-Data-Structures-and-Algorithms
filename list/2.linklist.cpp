//
// Created by frllk on 2021/6/20.
//
/**
 * 链表的实现方式
 * 1、结构体
 * 2、像一种思维逻辑方式
 */
#include <iostream>

int data[10]; // 数据域
int next[10]; // 指针域

//实现一个添加节点的函数：在相关的节点后面添加一个地址位p的节点，然后值位val
// 添加节点：在index节点后面添加节点p，节点p里面存储的值是val
void add(int ind, int p, int val) {
    next[ind] = p;
    data[p] = val;
    return;
}

int main() {
    int head = 3;
    data[3] = 0;
    add(3, 5, 1);
    add(5, 2, 2);
    add(2, 7, 3);
    add(7, 9, 100);
// 节点： 3    5   2   7   9
//   值：0    1   2   3   100
    int p = head;
    while(p!=0) {
        printf("%d->", data[p]);
        p=next[p];
    }
    printf("\n");
    return 0;
}