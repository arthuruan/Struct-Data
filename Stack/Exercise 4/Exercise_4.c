/*Exercise 4: The Reverse Polish notation (RPN) is a prefixed notation used to describe arithmetic expressions.
One of its advantages is the fact that it does not rely on the use of parenthesis to impose the evaluation
order of the expression. Write a C program that accepts an arithmetic expression in RPN format and
outputs the result of its evaluation. The only supported operations must be add (+), minus (−), divide
(/) and multiply (∗), and the operands are all positive and integer numbers composed by only one
digit (0, 1, 2, 3, 4, 5, 6, 7, 8, and 9). An example of a valid expression is ’51 + 34 − ∗’, which evaluates
to -6.*/
#include "Stack.h"
#include "string.h"

int main(void){

    t_stack s = {.top = -1};

    char string, aux;

    while(scanf("%c", &string)){

        if(string == '\n')
            break;

        switch (string){
            case '+':
                aux = s.v[s.top-1] + s.v[s.top];
                Pop(&s);
                Pop(&s);
                Push(&s, aux);
                break;
            case '-':
                aux = s.v[s.top-1] - s.v[s.top];
                Pop(&s);
                Pop(&s);
                Push(&s, aux);
                break;
            case '*':
                aux = s.v[s.top-1] * s.v[s.top];
                Pop(&s);
                Pop(&s);
                Push(&s, aux);
                break;
            case '/':
                aux = s.v[s.top-1] / s.v[s.top];
                Pop(&s);
                Pop(&s);
                Push(&s, aux);
                break;
            default:
                Push(&s, (string - '0'));
                break;
        }
    }

    printf("%d\n", Pop(&s));

    return 0;
}