#include <stdio.h>

void functionPointerTest();


int main() {
char testing[] = "We are testing if the void function is first working and returning the value of x and y\n";

printf("%s\n",testing);
//functionPointerTest();

int x = 15;
int y = 2;

int resultMain = x * y;

int *ptrMain  = &resultMain; //

int **ptrMultiply = &ptrMain; //this should now store 15 and y instead of 5 * 5 that is 25.

/*
so this is really important -- to point to another pointer, 
i always need to point it double to show that this is another pointer that
points to the old one with the value. 
So that i can actually change the value, I needed to point my new pointer to the old one
that actually holds the actual value of the resultMain.
If i just call the function without the pointers, i will get the result as 25 of course.
*/

printf("The result of the pointer that holds the value of the new x and y is: %p\n", &ptrMain); //this stores the first hash address to the method of functionPointerTest
functionPointerTest(); //this should output 25 now, and not 30.

return 0;
}


void functionPointerTest() {
    int x = 5;
    int y = 5;

    int result = x * y;

    int *ptrMultiply = &result;

    printf("The result of x and y is: %d", *ptrMultiply);
}
