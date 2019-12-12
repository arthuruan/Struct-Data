#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

typedef struct Stack{
    char v[STACK_SIZE];
    int top;
}t_stack;

void Push(t_stack *s, char v);
char Pop(t_stack *s);

#endif // STACK_H