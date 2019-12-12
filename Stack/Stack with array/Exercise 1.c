/*Exercise 1 (from the book The Algorithm Desing Manual. Skiena, S.):
A common problem for compilers and text editors is determining whether the parentheses in a
string are balanced and properly nested. For example, the string '((())())()' contains properly nested
pairs of parentheses while the strings ')()(' and '())' do not. Write a C program that returns true if
a string contains properly nested and balanced parentheses, and false otherwise. Identify the position
of the rst oending parenthesis if the string is not properly nested and balanced.*/
#include "Stack.h"

int Parentheses(t_stack *s){

    int aux = 0, j = 0;

    for(int i = 0; i < STACK_SIZE; i++){
        j++;
        if(s->v[i] == '('){
            aux++;
        }else if(s->v[i] == ')'){
            aux--;
        }

        if(aux < 0){
            printf("position %d error.\n", j);
            return 0;
        }
    }

    if(aux > 0){
        printf("missed parentheses in last.\n");
    }

    return (aux > 0) ? 0 : 1;
}

int main(void){

    t_stack s = {.top = -1}; // iniciallization top
    int i = 0;

    Push(&s, '(');    
    Push(&s, '(');    
    Push(&s, ')');    
    Push(&s, ')');    
    Push(&s, '(');

    Parentheses(&s);//

    Pop(&s);
    Push(&s, ')');

    Parentheses(&s);

    return 0;
}
