//
// Created by frllk on 2021/6/20.
//
/**
 * 链表的实现方式
 * 1、结构体
 */
#include <cstdlib>
#include <queue>
#include <stack>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <vector>
using namespace std;

//Node 代表链表中的节点：数据域、指针域（指向下一个节点的地址）
struct Node {
    // 构造函数
    Node(int data) : data(data), next(NULL) {}
    int data; // 数据域
    Node *next; // 指针域
};

int main() {
    // 构建一条包含4个节点的链表
    Node *head = NULL; // 链表头
    head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    //遍历链表：一般从头部开始
    Node *p = head;
    while (p != NULL) {
        printf("%d->", p->data);
        p = p->next;
    }
    printf("\n");
    return 0;
}