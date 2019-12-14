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
        aux->next->next = (*list)->head;
        (*list)->tail = aux->next;
    }   
    (*list)->size++;

    (*list)->tail->key = (*list)->size;
}

int Delete(t_sllist *list, int key){
    t_node *aux = list->head;

    if(aux->key == key){
        list->head = aux->next;
        free(aux);
        return 1;
    }

    while(aux){
        if(aux->next->key == key){
            printf("Value deleted: %d\n", aux->next->value);
            t_node *aux2 = aux->next;
            if(aux->next == list->tail){
                list->tail = aux;
                free(aux->next);
            }else{
                aux->next = aux->next->next;
                free(aux2);
            }
            return 1;
        }else if(aux == list->tail){
            printf("Value dont exist in list!\n");
            return 0;
        }
        aux = aux->next;
    }
}

int* Search(t_sllist* list,int key){
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

void printList(t_sllist *list){
    if(!list){
        printf("Stack empty!\n");
    }else{
        t_node *aux = list->head;

        printf("%d\n", aux->value);        

        while (aux){
            aux = aux->next;
            printf("%d\n", aux->value);
            if(aux == list->tail)
                break;
        }
    }    
}