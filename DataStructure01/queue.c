//
// 实现循环队列
// 循环队列支持动态扩容操作
//
#include <stdio.h>
#include <stdlib.h> // 进行动态的内存分配与释放

//定义队列结构
typedef struct queue {
    int *data; // 数据域，动态的，所以存指针
    int cap, size, front, rear; // cap: 容量上限  size：元素数量（可有可无） front：队首元素  rear：队尾元素的下一个元素
} queue;

// 创建：初始化，初始化容量上限为n的循环队列
queue *init_queue(int n) {
    queue *q = (queue *) malloc(sizeof (queue)); // 初始化队列的结构，需要申请空间
    q->data = (int *) malloc(sizeof (int) * n);// 手动申请队列中的数据域空间
    q->cap = n, q->size = 0;
    q->front = 0, q->rear = 0;
    return q;
}

// 销毁队列：先销毁它的数据域，在销毁它本身
void delete_queue(queue *q) {
    free(q->data);
    free(q);
}
// 入队：涉及扩容，不能像之前直接用realloc()扩容，需要重新申请一片空间，然后把元素一个一个的搬过去
int push(queue *q, int x) {
    // 判断队列是否满了
    // ((q->rear + q->cap) - q->front) % q->cap + 1 == q->cap
    //   (q->rear + 1) % q->cap == q->front   √
    if (q->size + 1 == q->cap) { //! 容量满了，扩容
        // 扩容操作：循环队列满了，需要扩容
        int *p = (int *) malloc(sizeof (int) * q->cap * 2);
        //! i: 遍历老空间， j: 遍历新空间，将数据手动移动
        for (int i = q->front, j = 0; j < q->size; i = (i + 1) % q->cap, j++) {
            p[j] = q->data[i];
        }
        q->cap *= 2;
        q->front = 0;
        q->rear = q->size;
        int *t = q->data;
        q->data = p; //! 更改，替换数据域指针为新空间
        free(t); //! 把原有空间释放
    }
    q->data[q->rear] = x;
    q->rear++;
    q->rear %= q->cap;
    q->size++;
    return 0;
}
// 出队
int pop(queue * q) {
    // 判断是否为空
    // q->front == q->rear
    if (q->size == 0) {
        return  -1;
    }
    q->front++;
    q->front %= q->cap;
    q->size--;
    return 0;
}

// 获取队首元素
int get_front(queue * q) {
    if (q->size == 0) {
        return  -1;
    }
    return q->data[q->front]; // 返回数据域中队首元素下标对应的元素
}

// 打印队列
void show_queue(queue *q) {
    printf("size = %d, cap = %d\n", q->size, q->cap);
    for(int i = q->front; i != q->rear; i = (i + 1) % q->cap) {
        printf("%d ",q->data[i]);
    }
    printf("\n--------------------------------\n");
}


int main() {
    int n, m; // n: 操作次数  m：容量上限
    scanf("%d%d", &n, &m);
    queue *q = init_queue(m);
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a); // 入队x   0：入队  1：出队  2：获取队首元素
        if (a == 0) {
            scanf("%d", &a);
            push(q, a);
        } else if (a == 1) {
            pop(q);
        } else {
            printf("front -> %d\n", get_front(q));
        }
        show_queue(q);
    }
    delete_queue(q);
    return 0;
}

