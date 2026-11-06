#include <stdio.h>
//#include <stdlib.h> //this is required for using malloc and also free the memory.

typedef struct {
    char firstName[10];
    char lastName[10];
    int myAge;

}fullName;


int main(int argc, char *argv[]) {
    fullName myFullName={"Genti","Rudi",28}; // so i have three arguments, but it count as 4 because of the name of the program
    if(argc > 4) { // so i want to check if there are more than 4, if true, print the error.
        printf("You have more than 5 arguments in the code");
        return 1;
    } 
    printf("Hello,\n");
    printf("%s %s, and I am %d years old.\n", myFullName.firstName, myFullName.lastName,myFullName.myAge);

    return 0;
}