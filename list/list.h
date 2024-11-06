#ifndef LIST_H
#define LIST_H

#include "node.h"

typedef struct{
    struct Node* nil;
    int size;
}List;


void initializeList(List *list);
Node* createNode(int value);
struct Node * search(List *list, int value);
void pretend(List *list, int value);
void insertAt(struct Node* node_1, struct Node *node_2);
void insert(List *list, int value);
void listDelete(struct Node *node);
void display(List *list);
void freeList(List *list);

#endif