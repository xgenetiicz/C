#include <stdio.h>

//too fun!!!
int main(){
//today i will make my first pointer to retrieve how old i am

int myAge = 28;
int* pointerAge = &myAge; //this holds a poiner to my value of age

printf("%d\n",myAge); //this will give 28

printf("%p\n",&myAge); //this should print the memory address. /**called for reference */

printf("%d\n",*pointerAge); //so i need to explicitly add '*' the star character where this is a specifier as a pointer. 
/*called for dereference by using *
*/

}