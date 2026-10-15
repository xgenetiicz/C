#include <stdio.h>

/*
Structures (also called structs) are a way to group several related variables into one place.
Each variable in the structure is known as a member of the structure. // makes sense
Unlike an array, a structure can contain many different data types (int, float, char, etc.).
*/

//this is actually creating new instances from a class in Java. like for example Car thisCar = new Car();
//and later on Car thisCar2 = new Car();
struct myFirstStruct{
char cars[30];
char model[30];
int year;
};


int main () {
struct myFirstStruct car1 = {"BMW","5-SERIES",2010};
struct myFirstStruct car2 = {"AUDI", "Q7",2018};
    printf("%s, %s, %d\n",car1.cars , car1.model, car1.year);
    printf("%s, %s, %d\n", car2.cars , car2.model, car2.year);
    return 0;
}