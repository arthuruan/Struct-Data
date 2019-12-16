/*Exercise 1:
Write the following functions, assuming that they will be applied over a doubly linked list
containing integers: Insert, Search and Delete. Consider implementations targeting sorted and unsorted
doubly linked lists.*/
#include "DLList.h"

void Insert(t_dllist **list, int value){

    if(!(*list)){
        (*list) = (t_dllist*) malloc(sizeof(t_dllist));
        (*list)->head = (t_node*) malloc (sizeof(t_node));
        (*list)->head->value = value;
        (*list)->head->next = NULL;
        (*list)->head->previous = NULL;
        (*list)->tail = (*list)->head;
    }else{
        t_node *aux = (*list)->tail;
        
        aux->next = (t_node*) malloc (sizeof(t_node));
        aux->next->value = value;
        aux->next->next = NULL;
        aux->next->previous = aux;
        (*list)->tail = aux->next;
    }   
    (*list)->size++;

    (*list)->tail->key = (*list)->size;
}

int Delete(t_dllist *list, int key){
    t_node *aux = list->head;

    if(aux->key == key){
        list->head = aux->next;
        aux->next->previous = NULL;
        free(aux);
        return 1;
    }

    while(aux){
        if(aux->next->key == key){
            printf("Value deleted: %d\n", aux->next->value);
            t_node *aux2 = aux->next;
            if(aux == list->tail){
                list->tail = aux->previous;
                aux->previous->next = NULL;
                aux->previous = aux->previous->previous;
                free(aux);
            }else{
                aux->next = aux->next->next;
                aux->next->previous = aux->previous;
                free(aux2);
            }
            return 1;
        }else if(aux == list->tail){
            printf("Value doesnt exist in list!\n");
            return 0;
        }
        aux = aux->next;
    }
}

int* Search(t_dllist* list,int key){
    t_node *aux = list->head;

    if(!list){
        printf("List empty!\n");
        exit(1);        
    }

    while(aux){
        if(aux->key == key)
            return &aux->value;
        if(aux == list->tail){
            printf("Key dont found!\n");
            exit(1);
            break;
        }
        aux = aux->next;
    }
}

void printList(t_dllist *list){
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