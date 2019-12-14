#include "SLList.h"

int main(void){
    t_sllist *s = NULL;

    Insert(&s, 2);
    Insert(&s, 3);
    Insert(&s, 4);
    Insert(&s, 5);
    Insert(&s, 6);

    printf("%d\n", *Search(s, 6));

    Delete(s, 5);

    printList(s);

    return 0;
}