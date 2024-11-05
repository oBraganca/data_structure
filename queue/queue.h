#ifndef QUEUE_H
#define QUEUE_H


#include "node.h"
typedef struct{
    struct Node* head;
    struct Node* tail;
    int size;
}Queue;

void initializeQueue(Queue *queue);
int isEmpty(Queue *queue);
void dequeue(Queue *queue);
void enqueue(Queue *queue, int value);
void peek(Queue *queue);
int size(Queue *queue);

#endif

