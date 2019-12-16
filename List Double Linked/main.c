#include "DLList.h"

int main(void){
    t_dllist *s = NULL;

    Insert(&s, 2);
    Insert(&s, 3);
    Insert(&s, 4);
    Insert(&s, 5);
    Insert(&s, 6);

    //printf("%d\n", *Search(s, 2));

    Delete(s, 3);
    
    printList(s);

    return 0;
}