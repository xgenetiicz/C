#include <stdio.h>

int main()
{
    char testingStrings[] = "Sup, is this actually working?";
    printf("%s\n", testingStrings);

    // nice - i have been working to write c code on my own.

    // im just writing code to test c and understand how it works
    int array2dTesting[] = {14, -23, 53, -10, 0, 10}; // so each integer is 4 bytes total: 6. 24 total bytes for this array

    // print the array length:
    int length = sizeof(array2dTesting) / sizeof(array2dTesting[0]);

    // and to print the size of it in bytes will be
    printf("The size of the array in bytes is: %d!\n", sizeof(array2dTesting));

    for (int i = 0; i < length; i++)
    {
        // so we print the array first:
        // printf("%d\n", array2dTesting[i]); // why can't i print the array first?

        if (array2dTesting[i] < 0)
        { // so for each iteration, we check the array if the iteration is less than 0.
            printf("\nThe element of: %d, is less than 0 at index: %d\n", array2dTesting[i], i);
        }
        else if (array2dTesting[i] > 0)
        {
            printf("The element of: %d, is bigger than 0 at index: %d\n", array2dTesting[i], i);
        }
        else if (array2dTesting[i] == 0)
        {
            char foundAZeroInArray[] = "\nFound a zero, but continue the loop and drop the element of i at: ";
            printf("%s %d \n",foundAZeroInArray,i);
            
        }
        else
        {
            char doesNotWork[] = "\nIkke en shit funker";
            printf("%s", doesNotWork);
        }
    }

    return 0;
}