#include <stdio.h>

int main() {
    
    //Task 1.1)

    int x = 5;
    int *ptr = &x; // this holds the address of x,  and now i say that *ptr is just a pointer to the value of &x
    *ptr = 10; // now this pointer should point 10 to the value of x

    int result = *ptr;//this is the same as for example arr[i]. the array with the exact value.
    printf("\nTask 1.1: \n");
    printf("Result: %d | Pointer: %p\n",result, &ptr); // this should give me 10 and the address of *ptr that points to the hash address of x.


    //Task 1.2)
    int a = 3, b = 7;
    int *p = &a; //a pointer that points to address of a
    p = &b; //the pointer holds now the address of b instead;

    *p = 1; //now I say that the pointer has the value of 1, where this pointer now points to the address of b.

    //the result should be that a = 3, and b is now 1.
    printf("\nTask 1.2: \n");
    printf("Variable A: %d | Variable B: %d\n",a,b); 

    //Task 1.3)

    int y = 8; 
    int *q = &y; // a pointer q points to the address of y
    *q = *q + 2; // basically saying that this pointer should add +2 to the value of y
    //y = y + 2;
    printf("\nTask 1.3: \n");
    printf("Variable Y: %d | Pointer Y: %p\n",*q,&y);

    //Task 1.4)
    int c = 4;
    int *d = &c;
    int n = *d; // *p this pointer holds the address of the pointer of c, where this value is 4.
    //so right now b = 4;
    n = 20; //here we set the value of b to 20 so the value of a is never changed.
    printf("\nTask 1.4: \n");
    printf("Variable C: %d | Variable N: %d\n",*d,n);
    return 0;
}