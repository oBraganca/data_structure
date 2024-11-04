#include <stdio.h>
#include <stdlib.h>

#include "stack/stack.h"


int main(){

    Stack stack;
    initializeStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    peek(&stack);

    pop(&stack);
    peek(&stack);

    return 0;
}