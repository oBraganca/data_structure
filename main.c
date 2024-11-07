#include <stdio.h>
#include <stdlib.h>

// #include "stack/stack.h"
// #include "queue/queue.h"
// #include "list/list.h"
// #include "list/node.h"
#include "tree/binary/node.h"
#include "tree/binary/binaryTree.h"


int main(){
    BinaryTree b_tree;

    initializeBinaryTree(&b_tree);
    insert(&b_tree.root, 6, NULL);  // A raiz não tem pai
    insert(&b_tree.root, 1, NULL);
    insert(&b_tree.root, 11, NULL);
    insert(&b_tree.root, 2, NULL);
    insert(&b_tree.root, 10, NULL);
    insert(&b_tree.root, 9, NULL);
    insert(&b_tree.root, 3, NULL);
    insert(&b_tree.root, 4, NULL);
    insert(&b_tree.root, 8, NULL);
    insert(&b_tree.root, 7, NULL);
    insert(&b_tree.root, 5, NULL);

    Node* searched = search(b_tree.root, 5);
    if (searched != NULL) {
        printf("Valor encontrado: %d\n", searched->key);
    } else {
        printf("Não encontrado\n");
    }
    return 0;
}
