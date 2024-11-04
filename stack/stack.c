// stack.c
#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

void initializeStack(Stack* stack) {
    stack->top = NULL;
}

int isEmpty(Stack* stack) {
    return stack->top == NULL ? 1 : 0;
}

void push(Stack* stack, int value) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = value;
    node->next = stack->top;
    stack->top = node;
}

void pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Não há valores na pilha\n");
        return;
    }
    Node* node = stack->top;
    stack->top = stack->top->next;

    printf("%d\n", node->data);  // Remova o `*`, pois data é um int
    free(node);
}

void peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Não há valores na pilha\n");
        return;
    }

    printf("%d\n", stack->top->data);
}
