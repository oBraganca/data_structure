#ifndef BINARYTREE_H
#define BINARYTREE_H

#include "node.h"

typedef struct{
    Node* root;
}BinaryTree;

void initializeBinaryTree(BinaryTree *b_tree);
void insert(Node **node, int value, Node *parent );
Node *search(Node *node, int value);
void deletNode(BinaryTree *b_tree);
void preorder(BinaryTree *b_tree);
void inorder(BinaryTree *b_tree);
void postorder(BinaryTree *b_tree);
void levelorder(BinaryTree *b_tree);
int height(BinaryTree *b_tree);
void clear(BinaryTree *b_tree);
int isEmpty(BinaryTree *b_tree);



#endif
