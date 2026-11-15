#include <stdio.h>

int linearSearch(int arr[],int length, int targetValue);

int main () {

    int arr[] = {123,2,2,4,15};
    int length = sizeof(arr) / sizeof(arr[0]);

    int result = linearSearch(arr,length,4);
    
    if(result == -1){
        printf("The target was not found.");
    } else {
        printf("Index = %d | Value = %d", result, arr[result]);
    }
    return 0;
}


int linearSearch(int arr[],int length, int targetValue) {

    for (int i = 0; i < length; i++) {
        if (arr[i] == targetValue) {
            return i;
        }
    }
    return -1;
}