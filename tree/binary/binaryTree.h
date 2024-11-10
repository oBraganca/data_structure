#ifndef BINARYTREE_H
#define BINARYTREE_H


#include "node.h"


BinaryTreeNode* createNode(int key);  // Modificado para incluir o parent
BinaryTreeNode* insert(BinaryTreeNode* node, int value);
BinaryTreeNode* search(BinaryTreeNode *node, int value);
void clear(BinaryTreeNode *node);
void deletNode(BinaryTreeNode *node);
void preorder(BinaryTreeNode *node);
void inorder(BinaryTreeNode *node);
void postorder(BinaryTreeNode *node);


#endif
