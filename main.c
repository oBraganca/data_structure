#include <stdio.h>
#include <stdlib.h>

// #include "stack/stack.h"
#include "queue/queue.h"


int main(){

    /*printf("__Stack implementation__\n");
    Stack stack;
    initializeStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    peek(&stack);

    pop(&stack);
    peek(&stack);
    printf("\n\n\n");
    
    printf("__Queue implementation__\n");*/
    Queue queue;
    initializeQueue(&queue);
    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);
    enqueue(&queue, 4);
    enqueue(&queue, 5);
    dequeue(&queue);
    enqueue(&queue, 6);
    peek(&queue);
    printf("%d\n", size(&queue));
    


    return 0;
}