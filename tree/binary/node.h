#ifndef NODE_H
#define NODE_H

typedef struct Node{
    int key;
    struct Node *p;
    struct Node *left;
    struct Node *right;
}Node;

#endif
