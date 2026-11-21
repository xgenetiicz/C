#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int *p = &a; //  p pointer points to address a;
    int *q = &b; //  q pointer points to address b;
    *p = *q; //here we say tha q pointer has the value of the pointer q -> where q points to address b;

    /*So both A and B is 20;
    *q that holds address of B is now stored into *p where *p holds the address of a.
    So that return the values of a and b to be 20.
    */

    printf("Variable A: %d | Variable B: %d\n",*p,*q);
    return 0;
}