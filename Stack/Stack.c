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
        s->v[s->top] = ' ';
        s->top--;
        return tmp;
    }else{
        printf("Stack overflow!\n");
        exit(1);
    }
}
/*
int main(void){

    t_stack s = {.top = -1}; // iniciallization top
    int i = 0;

    Push(&s, 'S');    
    Push(&s, 'T');    
    Push(&s, 'A');    
    Push(&s, 'C');    
    Push(&s, 'K');    
    Push(&s, 'A');

    Pop(&s);
    Pop(&s);
   
    Push(&s, 'K');    

    for(i = 0; i < STACK_SIZE; i++){
        printf("%c", s.v[i]);
    }

    printf("\n%i\n", s.top);

    return 0;
}*/