#include <stdio.h>


struct Owner {
    char firstName[30];//30 bytes
    char lastName[30];//30 bytes
};

struct Passenger {
    char firstName[30]; //30 bytes
    char lastName[30];//30 bytes
};

struct myStructureCar {
    char brand[30]; //30 bytes
    char model[30]; //30 bytes
    int year; // 4 bytes    
    struct Owner *owner; //we designate owner as a pointer -- this is the memory address that points to the struct of Owner
    struct Passenger *passenger; //designate the passenger also a a pointer -- memory address that points to the struct of Passenger
};

/*
Found out,and it makes sense that the the function needs to be under the struct, so the compiler understand that
this declared function, has a parameter that holds a struct, where this struct holds the values of the car structure
with nested structures where these point to each their own structure for retriving firstname and lastname,
*/
void updateCar(struct myStructureCar *myCar);


int main() {

    struct Owner person = {"Genti", "Rudi"};
    struct Passenger passenger = {"Arlinda", "Morina"};
    struct myStructureCar car = {"Audi","Q7",1998,&person,&passenger};

    printf("the year of the car was: %d\n", car.year);
    updateCar(&car);
    printf("The year of the car is now: %d\n", car.year);
    printf("Welcome, this brand new car has a owner, and this owner is: %s %s\n", car.owner->firstName,car.owner->lastName);
    printf("Car: %s, %s, %d\n", car.brand,car.model,car.year);
    printf("with Passenger: %s %s\n",car.passenger->firstName,car.passenger->lastName);
    
    return 0;
}

//the defintion of the function that has a struct as an parameter.
void updateCar(struct myStructureCar *myCar){
myCar->year = 2010; // this should update the struct of the car from 1998 to 2010
}
