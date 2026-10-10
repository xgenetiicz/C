#include <stdio.h>

int main()
{
    int myNumbers[5] = {20, 23, 42, 55, 44};

    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

    for (int i = 0; i < length; i++)
    {
        if (myNumbers[i] > 35 && myNumbers[i] < 35) // so this will be false because i sat it so we just get hte other statemetn.
        {
            // i want to print all the pointers available for the elements in the array.
            printf("%p\n", &myNumbers[i]);
        } else if (myNumbers[i] > 35){
            printf("the pointers for bigger than 35 are: %p\n",&myNumbers[i]); // this will print each pointer bigger than the element of 35.
        }
    }
    printf("\n The size of array in bytes is: %zu",sizeof(myNumbers)); // nice 20.
    return 0;
}