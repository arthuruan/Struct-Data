/*Exercise 2: Write a C program that reverses strings. For instance, given the string ”I am very good at data
structures”, the algorithm must reverse it to ”serutcurts atad ta doog yrev ma I”. It is important to
note that the program must change the given string, avoiding the creation of an additional variable to
store the reversed string. The function must take linear time.*/

#include "Stack.h"
#include <string.h>

int main(void){

    t_stack s = {.top = -1};

    char string[STACK_SIZE] = {"I am very good at data structures"};
    int val = strlen(string);

    for(int i = 0; i <= val; i++){
        Push(&s, string[i]);
    }

    for(int i = 0; i <= val; i++){
        string[i] = Pop(&s);
        printf("%c", string[i]);
    }

    return 0;
}