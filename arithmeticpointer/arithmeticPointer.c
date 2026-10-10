#include <stdio.h>

int main(void) {

    printf("Hello, World!\n");
    int arrayTest[4]= {123,32,42,55};
    int length = sizeof(arrayTest) / sizeof(arrayTest[0]); //this is how i retrieve the length of the array.
    char getText[] = "The size of this array in elements are: "; //and char is one byte each, and the reference variable is sat as a list of chars since String doesn't exists as a primitive datatype as in java

    printf("%s%d\n",getText,length); // this should give me 4 elements - each int is 4 bytes, so the array has 16 bytes in total then.

    //to print out bytes of the elements we need to use well the sizeof()
    int getTotalBytes = sizeof(arrayTest);

    printf("total size of bytes from the array is: %zu\n",getTotalBytes);

    int *ptr = arrayTest;

    // here do i create the pointer first to my array right. and the idea is i can use this pointer variable each time to access an element in the list
    // and modify the places through ptr++ or ptr-- after i set the values first.

    printf("The address of the pointer for the array is: %p\n",&arrayTest);

    /*now i will change the position of the elements.
    */
    //printf("%d\n",*ptr);

   //ptr++; // so 123, should be at place on [1].

   //printf("%d\n",*ptr);
   //ptr--; //so 32 should be at place [0]; 

   /*
   !!!!!!! it actually worked
   */

   // now change values for each pointer
   *ptr = 32;
   ptr++;



   *ptr = 123;
   int *lastElement = arrayTest + (length - 1); // beacuse i already calculated the arrays length, and minus one will give me the last position.
   *lastElement = *ptr; // and we say that from *ptr we retrieve the actual value and stores this now into *lastelement.

   *ptr = 42;
   ptr++;

   *ptr =55;
   ptr++;

   ptr = arrayTest; //so this will reset 

   /*
   I am amazed.
   */
   

    for (int i = 0; i < length; i++) {
        printf("%d\n", arrayTest[i]); //okay and i print. the idea is now to change each element with incrementation and decrementation
        //through pointers and then print the elements ordered.
    }

    return 0;
}


/**
 * This task got really bigger, and by finding out and writing code i also learned to point my pointer to another pointer and actually change the value
 * of the element with the value of that pointer.
 * for example *lastElement holds the value of = arrayTest + (length - 1) since i already calculated the total length of the array - and to get to the lest element of the array 
 * it is only minus by one dynamically so this was great.
 */
