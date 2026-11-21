#include <stdio.h>

int main() {

    //Task 1.5)
    int a = 4;
    int *p = &a;
    a = 7; //chaning the value directly and not through pointers

    int r = *p; //so the pointer points to the address of a before and the value is now 7.
    // so value r get the value of 7;

    printf("Variable R: %d with pointer *p: %p at address &a: %p",*p,&p,&a);

    return 0;
}