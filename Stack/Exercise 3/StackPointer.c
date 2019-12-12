#include "StackPointer.h"

void Push(t_node** node, int value){
    if(!*node){
        (*node) = (t_node*) malloc (sizeof (t_node));
        (*node)->head = (*node);
        (*node)->value = value;
        (*node)->next = NULL;
        (*node)->tail = (*node)->head;
    }else{
        t_node *aux = (*node);
        (*node)->head = aux;
        while (aux->next){
            aux = aux->next;
        }
        aux->next = (t_node*) malloc (sizeof (t_node));
        aux->next->value = value;
        aux->next->next = NULL;
        (*node)->tail = aux->next;
    }
}

int Pop(t_node *node){
    if(!node){
        printf("Stack underflow!\n");
        exit(1);
    }else{
        t_node *aux = node;
        while(aux->next->next){
            aux = aux->next;
        }
        free(aux->next->next);
        aux->next = NULL;
        node->tail = aux;
    }
}

void printStack(t_node *node){
    if(!node){
        printf("Stack empty!\n");
    }else{
        t_node *aux = node->head;

        printf("%d\n",aux->value);

        while (aux->next){
            aux = aux->next;
            printf("%d\n", aux->value);
        }
    }    
}