#include "StackPointer.h"

void Push(t_node** node, int value){
    if(!*node){
        (*node) = (t_node*) malloc (sizeof (t_node));
        (*node)->head = (*node);
        (*node)->value = value;
        (*node)->next = NULL;
        (*node)->tail = (*node)->head;
        //(*node)->top++;
    }else{
        t_node *aux = (*node);
        (*node)->head = aux;
        while (aux->next){
            aux = aux->next;
            //aux->top++;
        }
        aux->next = (t_node*) malloc (sizeof (t_node));
        aux->next->value = value;
        aux->next->next = NULL;
        (*node)->tail = aux->next;
    }
}

void printStack(t_node *node){
    t_node *aux = node->head;

    printf("%d\n",aux->value);

    while (aux->next){
        aux = aux->next;
        printf("%d\n", aux->value);
    }
}

int main(void){
    t_node *n0 = NULL;

    Push(&n0, 1);
    Push(&n0, 2);
    Push(&n0, 3);
    Push(&n0, 4);

    printStack(n0);

    return 0;
}