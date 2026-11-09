
#include <stdio.h>

void insertionSort();

int main(int argc, char *argv)
{
    insertionSort();
}

void insertionSort()
{
    int arr[] = {12, 4, 2, 21, 4};

    size_t length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < length; i++)
    {
        int temp = arr[i];
        int j = i - 1; // j should the value of i - 1 so we can go backwards to sort the insertion

        // and then we need a while loop that checks if j is greater or equal to 0 && arr[j] > temp value that is stored
        // because i wouldnt know how many elements a list have, so i need a condition that inserts the elements in the correct order.
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j]; // so the iteration of j should be stored into j + 1
            j--;                 // and decrement it.
        }
        arr[j + 1] =  temp;
    }
    
    printf("Insertion Sorted array:\n");
    for(int i = 0; i < length; i++) {
        printf("%d\n",arr[i]);
    }
    printf("\n");
}