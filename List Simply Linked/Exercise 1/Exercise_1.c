/*Exercise 1: from the book Introduction to Algorithms. Cormen T.H. et al.
Implement the dictionary operations Insert, Delete, and Search using singly linked, circular
lists. What are the running times of your procedures?.*/

#include "SLList.h"

int main(void){
    t_sllist *s = NULL;

    Insert(&s, 2);
    Insert(&s, 3);
    Insert(&s, 4);
    Insert(&s, 5);
    Insert(&s, 6);

    printf("%d\n", *Search(s, 2));

    Delete(s, 1);

    printList(s);

    return 0;
}