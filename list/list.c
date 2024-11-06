#include <stdio.h>
#include <stdlib.h>
#include "list.h"


void initializeList(List *list){
    list->nil = (Node*)malloc(sizeof(Node));
    list->nil->next = list->nil;
    list->nil->prev = list->nil;
    list->size = 0;
}

Node* createNode(int value) {
    Node *node = (Node*)malloc(sizeof(Node));
    node->data = value;
    node->next = NULL;
    node->prev = NULL;
    return node;
}

struct Node * search(List *list, int value){
    if(list->nil == list->nil->next){
        return NULL;
    }

    list->nil->data = value;
    Node *atual = list->nil->next;
    while(atual->data != value)
        atual = atual->next;

    if(atual == list->nil)
        return NULL;

    return atual;
    
}

void pretend(List *list, int value){
    Node* node = (Node*)malloc(sizeof(Node));
    node->data= value;
    node->next = list->nil->next;
    node->prev = list->nil;
    
    list->nil->next->prev = node;  // Atualiza o `prev` do antigo primeiro nó
    list->nil->next = node;
    
}

void insertAt(struct Node* node_1, struct Node *node_2) {
    node_2->next = node_1;
    node_2->prev = node_1->prev;
    
    if (node_1->prev != NULL) {
        node_1->prev->next = node_2;
    }
    
    node_1->prev = node_2;
}


void insert(List *list, int value){
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = value;
    node->prev = list->nil->prev;
    node->next = list->nil;
    list->nil->prev->next = node;
    list->nil->prev = node;
}

void listDelete(struct Node *node){
    node->prev->next = node->next;
    node->next->prev = node->prev;
    free(node);
}

void display(List *list) {
    if (list->nil == NULL || list->nil == list->nil->next) {
        printf("A lista está vazia.\n");
        return;
    }

    Node *current = list->nil->next;
    printf("List: ");
    while (current != list->nil) { 
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

void freeList(List *list) {
    Node *current = list->nil->next;
    while (current != list->nil) {
        Node *temp = current;
        current = current->next;
        free(temp);
    }
    free(list->nil);  // Libera o nó nil
    list->nil = NULL; // Para evitar acessos indesejados após a liberação
    list->size = 0;
}
