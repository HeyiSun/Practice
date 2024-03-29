#ifndef LOCKFREEQUEUE_H
#define LOCKFREEQUEUE_H

#include <memory.h>

class QueueNode {
  public:
    int        val;
    QueueNode* next;
    QueueNode(int val) : val(val) {
        next = NULL;
    }
};

class LockFreeQueue {
  public:
    LockFreeQueue();
    bool enqueue(int val);
    int  dequeue();
    ~LockFreeQueue();

  private:
    int        queue_size; // 暂时未使用，论文里并没有提及最大资源数
    QueueNode* tail;
    QueueNode* head;
};

#endif  // LOCKFREEQUEUE_H
