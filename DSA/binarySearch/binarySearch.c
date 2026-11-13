#include <stdio.h>

int binarySearch(int arr[],int targetVal, int length);

int main(int argc, char *argv) {

    int arr[] = {1,2,3,4,6,10,16,24,34,54,76,88};

    int length = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr,6,length);

    if(result == -1){
        printf("The result was not found, the value does not exist.");
    } else {
        printf("The result of the value found at target is: \n ");
        printf("Index = %d | Value: %d",result, arr[result]);
    }
    return 0;
}


int binarySearch(int arr[],int targetVal, int length) {
    int left = 0;
    int right =  length - 1; // do not forget to create the length of the array in main before calling method -> done.

    //Now a while loop for while left is less or equal right. then there is just one value to check or no values since they are equal
    while (left <= right) {

    // O(log) logarithmic time
    int mid = (left + right) / 2; //this is how i find mid in the sorted array, a binary just work in a sorted array -> if unsorted use linear search -> MID SHOULD BE IN THE WHILE LOOP BECAUSE IT CHANGES FOR EACH ITERATION.

        if(arr[mid] == targetVal) {
            return mid; // the value searched for is actually mid
        }

        //now i want to check if the left order is less than the target value, if there is the left should be placed after the mid earlier + 1 of course
        if(arr[mid] < targetVal){
            left =  mid + 1;
        } else {
            right = mid - 1; //if left is not less or equals, it means that the targetVal is on the right side.
        }
    }
    return -1; // if not found the value we are looking for.
}