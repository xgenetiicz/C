#include <stdio.h>

int factorial(int n);

int main () {
int number = 5;
printf("%d\n", factorial(number)); // 5! = 5*4*3*2*1= 120!
return 0;
}

int factorial (int n) {
    if (n > 1) {
        return n * factorial(n-1);
    } else if (n == 0) {
        printf("The result of the factorial is 0!");
        return 1;
    }
}