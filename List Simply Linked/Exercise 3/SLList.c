#include "SLList.h"

void Insert(t_sllist **list, int value){

    if(!(*list)){
        (*list) = (t_sllist*) malloc(sizeof(t_sllist));
        (*list)->head = (t_node*) malloc (sizeof(t_node));
        (*list)->head->value = value;
        (*list)->head->next = NULL;
        (*list)->tail = (*list)->head;
    }else{
        t_node *aux = (*list)->tail;
        
        aux->next = (t_node*) malloc (sizeof(t_node));
        aux->next->value = value;
        aux->next->next = NULL;
        (*list)->tail = aux->next;
    }   
    (*list)->size++;

}

void Reverse(t_sllist *list){

    t_node *aux = list->head;
    t_node *prev1, *next;

    next = aux->next;
    aux->next = NULL;    
    prev1 = aux;
    aux = next;
    list->tail = prev1;

    printf("%d", list->tail->value);

    while(aux){
        next = aux->next;
        aux->next = prev1;
        prev1 = aux;
        aux = next;
    }
    list->head = aux;
}

void printList(t_sllist *list){
    if(!list){
        printf("Stack empty!\n");
    }else{
        t_node *aux = list->head;      

        while (aux){
            printf("%d\n", aux->value);
            aux = aux->next;
        }
    }    
}