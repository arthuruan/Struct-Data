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
    int key;
}t_node;

void Insert(t_sllist**,int);
int Delete(t_sllist*,int);
void printList(t_sllist*);
int* Search(t_sllist*,int);

#endif // !SLLIST_H