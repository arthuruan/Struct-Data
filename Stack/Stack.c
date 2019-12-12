#include "Stack.h"

void Push(t_stack *s, char v){
    if(s->top < STACK_SIZE - 1){
        s->top++;
        s->v[s->top] = v;
    }else{
        printf("Stack overflow!\n");
        exit(1);
    }
}

char Pop(t_stack *s){
    if(s->top >= 0){
        char tmp = s->v[s->top];
        //s->v[s->top] = ' ';
        s->top--;
        return tmp;
    }else{
        printf("Stack overflow!\n");
        exit(1);
    }
}