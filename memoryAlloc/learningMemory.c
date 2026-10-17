#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

struct Passenger{
    char firstName[30];
    char lastName[30];
    int age;
};

struct Owner {
    char firstName[30];
    char lastName[30];
    int age;
};    

//Need a struct with a pointer
struct Owner *makeOwner() {
    struct Owner *o = malloc(sizeof(struct Owner)); //FINALLY UNDERSTOOD I CREATE A NEW POINTER TO THE STRUCT THAT EXPLICITLY TELLS HOW MUCH MEMORY TO ALLOCATE FOR THE ENTIRE STRUCT
    // BY STORING THE MALLOC WHICH IS 64 BYTES IN TOTAL TO THE POINTER OF *o
    strcpy(o->firstName, "Arlinda");
    strcpy(o->lastName, "Test");
    o->age=23;
    return o;//we return the value so we can free it later.
};


struct Car{
    char brand[30];
    char model[30];
    int year;

    struct Owner *owner;
    struct Passenger *passenger;
};

//This declaration needs to be under the structure so the program works.
void freeMemory(struct Car *myCar);

int main() {
    struct Owner fakeOwner = {"Genti", "Rudi",28};
    struct Passenger fakePassenger={"Arlinda","Test",23};
    struct Car car = {"Audi","RS6",2000,&fakeOwner,&fakePassenger};
    car.owner = makeOwner(); // and here i say that the makeOwner() pointer function will now be stored into  car.owner - WHICH WILL HAVE THE NEW VALUES POINTED NOW.



    printf("Welcome to my test using malloc within a whole program! I was \n\n");
    printf("The year of the car was: %d\n", car.year);
  
    printf("The fake owner is: %s %s, %d years old.\n",car.owner->firstName,car.owner->lastName,car.owner->age);
    printf("The fake passenger is: %s %s, %d years old.\n\n",car.passenger->firstName,car.passenger->lastName,car.passenger->age);
    freeMemory(&car);// we call on the function here and point it to all the structures related to the car and change their values through pointers.
    printf("The year of the car is now: %d\n", car.year);
    printf("The original owner is: %s %s, %d years old.\n",car.owner->firstName, car.owner->lastName,car.owner->age); // should display Arlinda Test, 23 years old.
    printf("The original passenger is: %s %s, %d years old. \n",car.passenger->firstName,car.passenger->lastName,car.passenger->age);//should display Genti Rudi, 28 years old.

    printf("The size of car.owner in bytes are: %zu\n",_msize(car.owner)); //should display 64 bytes. !!NICE

    free(car.owner); // after the last printf - I don't need the bytes anymore so i free them. THIS IS WHAT GARBAGE COLLECTION IN JAVA IS HIDING FROM ME.
    //The bytes allocated are now free, but the pointer is still dangling and point to the adress - and now for ensuring it that the pointer is not pointing i should declare the 
    //pointer to NULL. 

    car.owner = NULL;

    //check if it is true
    if(car.owner == NULL) {
        printf("The pointer is now null: %p\n",car.owner);
    }

    return 0;
}

void freeMemory(struct Car *myCar) {
    myCar->year = 2026; //this is not a string so no need for the string function.
    
    myCar->owner->age=23; //change the value of the owner - forgot to add this
    myCar->passenger->age=28; //change the value of age of passenger. 
    strcpy(myCar->passenger->firstName, "Genti");
    strcpy(myCar->passenger->lastName, "Rudi");

    /*
    learningMemory.c:48:28: error: assignment to expression with array type
     myCar->owner->firstName="Arlinda"; 
     this is because im trying to assign a string into a array of characters,
     and i cannot do this after they are defined.
     so i need to copy the data using strcpy().
    */

    /*
    TODO:I would changed freeMemory also and make a struct pointer function with malloc for passenger.
    But i am just too tired for this right now, i feel mentally drained. xd
    */
}


