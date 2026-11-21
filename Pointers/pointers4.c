#include <stdio.h>

int main() {

    int a = 1, b = 2;
    int *p = &a; //a pointer of int to address a
    *p = 5; // the pointer has a value of 5, and now a = 5;
    p = &b; // the pointer variable has now the value of address b = 2;
    *p = 6; // the pointer has the value of 6;

    //the value of *p is now 6; where b is 6.
    //and a is 5 since *p = 5; where this pointer wrote the value into the address
    //of &a;

    printf("Variable A: %d | Pointer A: %p\n",a,&a);
    printf("Variable B: %d | Pointer B: %p | Pointer to Pointer B: %p\n",*p,&b,&p);
    
    
    return 0;
}