#include <stdio.h>

int add();
int subtract();
int multiply();

int main() {

    int x = 5;
    int y = 3;
    int (*operations[3])() ={ add, subtract, multiply }; //we create a new int function pointer array that has three elements
    //those elements are actually different functions.
    for (int i = 0; i < 3; i++){
        printf("%d\n",operations[i](x,y)); //this should print each operation with the correct element based on iteration.
    }

    return 0;
}


int add(int x, int y) {
return x + y;
}

int subtract(int x, int y) {
return x - y;
}

int multiply(int x, int y) {
return x * y;
}