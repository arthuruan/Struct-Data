/*Exercise 2: from the book Introduction to Algorithms. Cormen T.H. et al.
The dynamic-set operation Union takes two disjoint sets S1 and S2 as input, and it returns a set
S = S1 U S2 consisting of all the elements of S1 and S2 . The sets S1 and S2 are usually destroyed by
the operation. Show how to support Union in O(1) time using a suitable list data structure.*/

#include "SLList.h"

int main(void){
    t_sllist *s1 = NULL;
    t_sllist *s2 = NULL;

    Insert(&s1, 2);
    Insert(&s1, 3);
    Insert(&s1, 4);
    Insert(&s2, 5);
    Insert(&s2, 6);

    printList(Union(s1,s2));

    return 0;
}