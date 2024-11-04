// stack.h
#ifndef STACK_H
#define STACK_H

#include "node.h"

typedef struct {
    Node* top;
} Stack;

void initializeStack(Stack* stack);
int isEmpty(Stack* stack);
void push(Stack* stack, int value);
void pop(Stack* stack);
void peek(Stack* stack);

#endif
