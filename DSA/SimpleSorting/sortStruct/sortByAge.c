#include <stdio.h>

typedef struct 
{
    char name[30];
    int age;
}  sortByAge;


void SortStruct(sortByAge arr[], int length);

int main(int argc, char *argv[]) {

    sortByAge sortIt[4]={
        {"Genti", 28},
        {"Test", 24},
        {"Test1", 4},
        {"Test10", 10},
    };

    //the length of the array
    size_t length = sizeof(sortIt) / sizeof(sortIt[0]);

    printf("The code is working! And the size of struct is: %zu\n",sizeof(sortByAge));

    //now print the method
    SortStruct(sortIt,length);

    //now i need a loop to actually print the values.
    for(int k = 0; k < length; k++) {
        printf("Pass: %d | User: %s | Age: %d\n",k + 1,sortIt[k].name, sortIt[k].age);
    }

    return 0;
}

void SortStruct(sortByAge arr[],int length) { // i need to pass the length since c doesnt know that the method has an length if i don't define it in the parameters.
    sortByAge temp; //i was passing an int, and i am working with a struct -> so i need to pass the struct to the temp variable
    for (int i = 0; i < length - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < length; j++) {
            if(arr[j].age < arr[minIndex].age) {
            minIndex = j; //remember where the youngest person is.
            }
        }
        //need a temp value to store it.
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

