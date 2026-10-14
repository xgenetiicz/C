#include <stdio.h>

void sayHello();
void sayGoodbye();

void doBoth(void (*func)()) { 
    func(); //call on 
}

/*So the idea here is to pass a function to another function and repeat this several times
This is to create pointers to function so i can call two functions with one for loop
*/

void repeat(int n, void (*func)()) {
    for (int i = 0; i < n; i++) {
        func(); //this call on the function for each iteration i of course. 
    }
}

int main() {
    doBoth(sayHello); // print sayHello
    doBoth(sayGoodbye); // print sayGoodBye

    repeat(3, sayHello); //assign the value of n and the current function you want to run.
    repeat(6, sayGoodbye); // this stops when i == n, so 0,1,2,3,4,5 are true and 6<6 is false of course.

    return 0;
}

void sayHello(){
    printf("we are saying Hello\n");
}

void sayGoodbye() {
    printf("We are saying Goodbye\n");
}