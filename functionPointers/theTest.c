#include <stdio.h>

int multiply();

int main() {
char testing[] = "Now we will see if a succed to call the function with a pointer that should hold two parameters!\n";
printf("%s",testing);

int (*ptr)(int, int) = multiply;
int result = ptr(5,5); 
printf("The result of the function retrieved with a pointer is: %d", result);

return 0;
}
/*
How is it possible to retrieve 25 but also 29 on line 11?
if i comment the print statement from the method, it dissapears, but why does it actually
add it up with four onto 25?
 */

 /**Sick, so the method int multiply does not have a return statement as it should
 and when not returning the value, the print from main returns bytes in char where 
 this are 29 total - THE CPU returns the value of 29 bytes since the program doesn't know
 what to return in the method. if i put a return as i should have done it since it is not a void - 
 it returns then 25, the actual value and not the bytes itself from the print statement
 one char is one byte. 
  */

int multiply(int x, int y) {
    int result = x * y;
    printf("The result of x and y is: %d\n",result);
    return result;
}