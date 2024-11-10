#include <stdio.h>
#include <stdlib.h>

// #include "stack/stack.h"
// #include "queue/queue.h"
// #include "list/list.h"
// #include "list/node.h"
#include "tree/binary/node.h"
#include "tree/binary/binaryTree.h"


int main(){
    BinaryTreeNode *root = NULL;

    root = insert(root, 6);
    insert(root, 1);
    insert(root, 11);
    insert(root, 2);
    insert(root, 10);
    insert(root, 9);
    insert(root, 3);
    insert(root, 4);
    insert(root, 8);
    insert(root, 7);
    insert(root, 5);


    printf("BST In Order: ");
    inorder(root);
    printf("\nBST Pre Order: ");
    preorder(root);
    printf("\nBST Post Order: ");
    postorder(root);

    printf("\n");   


    BinaryTreeNode* searched = search(root, 5);
    if (searched != NULL) {
        printf("Valor encontrado: %d\n", searched->key);
    } else {
        printf("Não encontrado\n");
    }
    return 0;
}
