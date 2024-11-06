#ifndef NODE_H
#define NODE_H

typedef struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
} Node;

#endif