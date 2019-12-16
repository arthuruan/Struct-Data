#ifndef SLLIST_H
#define SLLIST_H
#include <stdio.h>
#include <stdlib.h>

typedef struct SLList{
    struct Node* head;
    struct Node* tail;
    int size;
}t_sllist;

typedef struct Node{
    struct Node* next;
    int value;
}t_node;

void Insert(t_sllist**,int);
void Reverse(t_sllist*);
void printList(t_sllist*);

#endif // !SLLIST_H