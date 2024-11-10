#include <stdio.h>
#include <stdlib.h>
#include "binaryTree.h"

BinaryTreeNode* createNode(int key) {
    BinaryTreeNode* newNode = (BinaryTreeNode*)malloc(sizeof(BinaryTreeNode));
    newNode->key = key;
    newNode->left = newNode->right = NULL;
    newNode->p = NULL;
    return newNode;
}

BinaryTreeNode* insert(BinaryTreeNode* root, int key) {
    if (root == NULL) {
        return createNode(key);
    }

    if (key < root->key) {
        root->left = insert(root->left, key);
        root->left->p = root;
    } else if (key > root->key) {
        root->right = insert(root->right, key);
        root->right->p = root;
    }

    return root;
}


BinaryTreeNode* search(BinaryTreeNode *node, int value) {
    if (node == NULL || node->key == value) {
        return node;
    }
    if (value < node->key) {
        return search(node->left, value);
    } else {
        return search(node->right, value);
    }
}


void preorder(BinaryTreeNode *node){
    if(node == NULL){
        return;
    }
    printf("%d ", node->key);
    preorder(node->left);
    preorder(node->right);
}

void inorder(BinaryTreeNode *node){
    if(node == NULL){
        return;
    }
    inorder(node->left);
    printf("%d ", node->key),
    inorder(node->right);
}

void postorder(BinaryTreeNode *node){
    if(node == NULL){
        return;
    }

    preorder(node->left);
    preorder(node->right);
    printf("%d ", node->key);

}

void clear(BinaryTreeNode *node) {
    if (node == NULL) {
        return;
    }
    clear(node->left);
    clear(node->right);
    free(node);
}
