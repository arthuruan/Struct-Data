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

t_sllist* Union(t_sllist *list1, t_sllist *list2){

    t_node *aux = list1->tail;
    t_sllist *aux2 = (t_sllist*) malloc(sizeof(t_sllist));

    if(!list1)
        printf("list 1 is empty!");
        exit(1);
        
    if(!list2)
        printf("list 2 is empty!");
        exit(2);

    aux->next = list2->head;

    aux2->head = list1->head;
    aux2->tail = list2->tail;

    free(list1);
    free(list2);

    return aux2;
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