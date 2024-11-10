#ifndef BINARYTREE_H
#define BINARYTREE_H


#include "node.h"


BinaryTreeNode* createNode(int key);  // Modificado para incluir o parent
BinaryTreeNode* insert(BinaryTreeNode* node, int value);
BinaryTreeNode* search(BinaryTreeNode *node, int value);
void clear(BinaryTreeNode *node);
void deletNode(BinaryTreeNode *node);
// void preorder(BinaryTree *b_tree);
// void inorder(BinaryTree *b_tree);
// void postorder(BinaryTree *b_tree);
// void levelorder(BinaryTree *b_tree);
// int height(BinaryTree *b_tree);
// int isEmpty(BinaryTree *b_tree);



#endif
