#ifndef STACKPOINTER_H
#define STACKPOINTER_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    struct Node* next;
    struct Node* head;
    struct Node* tail;
    int value;
}t_node;

void Push(t_node** node, int value);

int Pop(t_node** node);

#endif // !STACKPOINTER_H
