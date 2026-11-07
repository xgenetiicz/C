/*
So im going to work with DSA, and i will be given a problem to each task that i will a solution for, on my own.
This reason is for advancing with the critical thinking on how to interpret a problem.

task:

Arrays: find the largest number -> DONE.
reverse an array -> DONE
count even numbers with % -> Done
move all 0s to the end
*/

#include <stdio.h>

void largestElement(); 
void reversedArray();

int main (){
    largestElement();
    reversedArray();
    return 0;
}


void largestElement() {
    // first an array with a list of integers
    
    int myArray[] = {12,23,41,10,0,4,0,5,6,0};
    
    size_t length = sizeof(myArray) / sizeof(myArray[0]);

    //assume first that the first element is the biggest, and also need a variable to store the elements so i can compare.
    int largeNumber = myArray[0]; 

    for (int i = 0; i < length; i++) {

        if(myArray[i] > largeNumber){

        //print the biggest number in the array
        largeNumber = myArray[i];
        }
    }
    printf("The biggest number is: %d\n",largeNumber);

    //using a new loop to check the numbers that are even in the array by modulo operator
    for (int i = 0; i < length; i++) {
        if (i % 2 == 0){
            printf("Even: %d\n",i);
        } if(i % 2 == 1) {
            printf("Odd: %d ",i);
        }
    }
}

void reversedArray() {
    // I need the array
    int myArray[] = {12,23,41,10,0,4,0,5,6,0};

    //I need also the length of the array but this will be stored as reversedArray, where this will calculate by n.
    size_t length = sizeof(myArray) / sizeof(myArray[0]);

    // I also need a variable to traverse the array backwards. And i should traverse the length of the array..?
    int reversed[sizeof(myArray) / sizeof(myArray[0])];
    printf("\nThe reversed array is: \n");
    for (int i = 0; i < length; i++) {
        reversed[i] = myArray[length - 1 - i];
    }

    for(int i = 0; i < length; i++) {
        printf("%d\n",reversed[i]);
    }
}