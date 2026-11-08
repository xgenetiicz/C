/*
Each pass: find the smallest in the rest, swap it into place i. Print which number got placed.
*/

#include <stdio.h>

void selectionSorting();

int main(int argc, char *argv) {
    selectionSorting();
    return 0;
}

void selectionSorting() {
    int arr[] = {21,2,4,67,34,0};

    size_t length = sizeof(arr) / sizeof(arr[0]);

    
    int temp = 0;

    for(int i = 0; i < length; i++) {
        int minIndex = i;
        for(int j = i + 1; j < length; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j; //store the minimum index found by j, this should be 0
            }
        }
        temp = arr[i]; //store the iteration of the array at i on temp
        arr[i] = arr[minIndex]; //when the minimunindex is found by j, we store it into the array
        arr[minIndex] = temp; 
        printf("Pass %d: %d\n",i + 1,arr[i]);
    }
}