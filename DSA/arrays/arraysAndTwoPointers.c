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
void moveAllZerosToTheEnd();

int main()
{
    largestElement();
    reversedArray();
    moveAllZerosToTheEnd();
    return 0;
}

void largestElement()
{
    // first an array with a list of integers

    int myArray[] = {12, 23, 41, 10, 0, 4, 0, 5, 6, 0};

    size_t length = sizeof(myArray) / sizeof(myArray[0]);

    // assume first that the first element is the biggest, and also need a variable to store the elements so i can compare.
    int largeNumber = myArray[0];

    for (int i = 0; i < length; i++)
    {

        if (myArray[i] > largeNumber)
        {

            // print the biggest number in the array
            largeNumber = myArray[i];
        }
    }
    printf("The biggest number is: %d\n", largeNumber);

    // using a new loop to check the numbers that are even in the array by modulo operator
    for (int i = 0; i < length; i++)
    {
        if (myArray[i] % 2 == 0)
        {
            printf("Even: %d\n", myArray[i]);
        }
        if (myArray[i] % 2 == 1)
        {
            printf("Odd: %d\n", myArray[i]);
        }
    }
}

void reversedArray()
{
    // i will try to reverse the array again.
    int myArray[] = {12, 23, 41, 10, 0, 4, 0, 5, 6, 0};

    size_t length = sizeof(myArray) / sizeof(myArray[0]);

    // to reverse it, I need a new array that stores the values in reverse order
    int reversed[sizeof(myArray) / sizeof(myArray[0])];

    printf("The reversed array is: \n");
    for (int i = 0; i < length; i++)
    {

        // now the new array that is reversed[i] that holds the elements of i, will be the elements of the original array - 1 and the iteration of it.
        reversed[i] = myArray[length - 1 - i];

        printf("%d\n", reversed[i]);
    }
}

void moveAllZerosToTheEnd()
{
    int myArray[] = {12, 23, 41, 10, 0, 4, 0, 5, 6, 0};

    // size of it where the length is the calculated size that holds O(1)
    size_t length = sizeof(myArray) / sizeof(myArray[0]);

    // The idea is to move all of the zeros to the end, so there should be a variable that takes the element and change the order of it to the last index.
    int write = 0;

    // a temporary variable that holds the elements when swapping with write.
    int temp = 0;

    printf("The Array is now swapped with all the zero's at the end: \n");
    for (int i = 0; i < length; i++)
    {
        if (myArray[i] != 0)
        { // if it equals 0 we hop over them and continue further
           //TEMP WILL HOLD THE VALUE OF THE ARRAY
           temp = myArray[i]; // this iterates for each iteration and store the value there. when i = 4 -> 0, it will hop over the value and theck the next element that is not null.
           myArray[i] = myArray[write]; // when write finds values that are not 0, it writes to the list. 
           myArray[write] = temp; // but i also need to tell the write that it should write the values retrieved also from temp, where in this case, it holds the value that is not null-
           write++; // and for each iteration we increment the value by one step forward, and this will result that all the elements that holds 0 will be returned back at the last place.
        }
    }

    for(int i = 0; i < length; i++) {
        printf("%d\n",myArray[i]);
    }
}
