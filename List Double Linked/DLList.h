#ifndef SLLIST_H
#define SLLIST_H
#include <stdio.h>
#include <stdlib.h>

typedef struct SLList{
    struct Node* head;
    struct Node* tail;
    int size;
}t_dllist;

typedef struct Node{
    struct Node* next;
    struct Node* previous;
    int value;
    int key;
}t_node;

void Insert(t_dllist**,int);
int Delete(t_dllist*,int);
void printList(t_dllist*);
int* Search(t_dllist*,int);

#endif // !SLLIST_H