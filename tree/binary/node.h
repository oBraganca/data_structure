#ifndef NODE_H
#define NODE_H

typedef struct BinaryTreeNode {
    int key;
    struct BinaryTreeNode *p;   // Ponteiro para o nó pai
    struct BinaryTreeNode *left;
    struct BinaryTreeNode *right;
} BinaryTreeNode;

#endif
