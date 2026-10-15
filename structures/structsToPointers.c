#include <stdio.h>


struct Owner {
    char firstName[30];
    char lastName[30];
};

struct Car {
    char brand[30];
    char model[30];
    int year;
    struct Owner *owner; //nested structure retrieved from struct Owner 
};

int main() {
    struct Owner person = {"John","Doe"};
    struct Car car1 = {"Audi","A6",2018,&person}; // need to call on the memory address instead since Owner is now a pointer through *owner.

    printf("Car: %s, %s, %d\n", car1.brand, car1.model, car1.year);
    printf("Owner: %s, %s\n", car1.owner->firstName, car1.owner->lastName); //so when referring i use pointer haha! it explicitly says *owner that is owner=&person [firstName,lastName];
    return 0;
}