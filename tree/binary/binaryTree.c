#include <stdio.h>
#include <stdlib.h>
#include "binaryTree.h"


void initializeBinaryTree(BinaryTree *b_tree){
    b_tree->root=NULL;
}

void insert(Node **node, int value, Node *parent){
    if (*node == NULL) {
        *node = (Node*)malloc(sizeof(Node));
        (*node)->key = value;
        (*node)->left = (*node)->right = NULL;
        (*node)->p = parent;  // Atribui o nó pai
        return;
    }

    if (value < (*node)->key) {
        insert(&(*node)->left, value, *node);
    } else {
        insert(&(*node)->right, value, *node);
    }
}


Node* search(Node *node, int value) {
    if (node == NULL) {
        return NULL;
    }

    if (node->key == value) {
        return node;
    }

    if (value < node->key) {
        return search(node->left, value);
    } else {
        return search(node->right, value);
    }
}
