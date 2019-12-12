#include "StackPointer.h"

int main(void){
    t_node *n0 = NULL;

    Push(&n0, 2);
    Push(&n0, 3);

    printf("%d", n0->tail->value);

    Pop(n0);

    printStack(n0);

    return 0;
}