#include "StackPointer.h"

int main(void){
    t_node *n0 = NULL;

    Push(&n0, 1);
    Push(&n0, 2);
    Push(&n0, 3);

    printStack(n0);

    printf("this is top,  %d\n", n0->tail->value);
    printf("this is head,  %d\n", n0->head->value);

    printf("Pop.\n");
    Pop(n0);

    printStack(n0);

    return 0;
}