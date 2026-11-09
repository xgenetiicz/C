/*
i will try again to write a selection sort from the beginning to make sure i know this well.
*/

#include <stdio.h>

void selectionSortFunction();

int main(int argc, char *argv[])
{
    selectionSortFunction();
    return 0;
}

void selectionSortFunction()
{
    int arr[] = {12, 34, 1, 3, 4, 5};

    size_t length = sizeof(arr) / sizeof(arr[0]);

    // need a place to store the temp value when doing a selection sort
    int temp = 0;

    for (int i = 0; i < length - 1; i++)
    {
        // now i need to track the minimumindex for the iteration of i
        int minIndex = i;

        for (int j = i + 1; j < length; j++)
        {
            if (arr[j] < arr[minIndex])
            {
            minIndex = j; // remember the minimum index.
            }
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    for (int k = 0; k < length; k++)
    {
        printf("Value: %d\n", arr[k]);
    }
}