#include <stdio.h>
#include <stdlib.h>
#include "queue.h"


void initializeQueue(Queue* queue) {
    queue->head = NULL;
    queue->tail = NULL;
    queue->size = 0;
}

int isEmpty(Queue *queue){
    return queue->head == NULL ? 1 : 0; 
}

void dequeue(Queue *queue){
    if(isEmpty(queue)){
        printf("Fila está fazia");
        return;
    }

    Node* node = queue->head;
    queue->head = queue->head->next;

    queue->size--;
    free(node);
}

void enqueue(Queue *queue, int value){
    Node *node = (Node*)malloc(sizeof(Node));

    node->data = value;
    node->next = NULL;

    if(isEmpty(queue)){
        queue->head = node;
    }else{
        queue->tail->next = node;
    }

    queue->tail = node;
    queue->size++;
}

void peek(Queue *queue){
    if(isEmpty(queue)){
        printf("Fila está fazia");
        return;
    }

    printf("%d\n", queue->head->value);
}

int size(Queue *queue){
    return queue->size;
}
