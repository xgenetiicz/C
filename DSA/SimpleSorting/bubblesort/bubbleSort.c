/*
Bubble sort
Input:    {64, 25, 12, 22, 11}
Expected: {11, 12, 22, 25, 64}
- Print the array after every pass. -> done
- Then add a "swapped" variable: on {1, 2, 3, 4, 5} it must stop after 1 pass.
*/


#include <stdio.h>

void bubbleSortMethod();

int main(int argc, char *argv[]) {
    
    bubbleSortMethod();
    return 0;
}


void bubbleSortMethod() {
    int arr[] = {64,25,12,22,11};

    size_t length = sizeof(arr) / sizeof(arr[0]);

    /*Now bubble sort is a sorting where this will sort an unsorted array, and often do we need
    a temp value but also a swapped value that will swap the values right.
    [8][3][4][8] right - i want to swap it with that the temp is for example [3] and swap should check if i=0[8] is bigger than temp, if true ->
    swap it like [3][8][4][8]. makes sense? and for each swap, so to check for every pass, i need a inner loop that iterates over all passes for each iteration of i
    [3][8][4][8]
i=0 j  j+1
    */

    int temp = 0;
    int swap = 0;

    printf("The sortered list is: \n");
    for (int i = 0; i < length; i++) {
        for(int j = 0; j < length - 1 - i; j++) { // so when j = 4, length should be then 5-1-4 = 0. then everything should be sorted right.
            if(arr[j] > arr[j+1]){ // i want to check the next iteration of j so i can check the next element. if bigger i need to swap it to the right.
                temp = arr[j]; //like the sortered 0, from arrays dir, i want to store it into the temp variable.
                arr[j] = arr[j+1];
                arr[j+1]=temp;
            }
        }
       printf("Pass %d: ", i + 1);
       //now i need an own for loop to print the whole array
        for(int k = 0; k < length; k++){
        printf("%d ",arr[k]);
        }
        printf("\n"); 
    }
}