#ifndef STACKPOINTER_H
#define STACKPOINTER_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    struct Node* next;
    struct Node* head;
    struct Node* tail;
    int value;
    int top;
}t_node;

void Push(t_node** node, int value);



#endif // !STACKPOINTER_H
