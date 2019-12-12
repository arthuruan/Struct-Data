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