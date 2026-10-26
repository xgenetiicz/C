#include <stdio.h>


//Today im going to work with bitwise operators and understand how to change
//bits and manipulate them

/*
bit level programming operators are:

& = AND
| = OR
^ = XOR
<< = left shift
>> = right shift. 
*/

int main (){
    //int x = 6; //0000 0110  
    //int y = 12;//0000 1100
    //int z = 0;

    //z = x & y;

    int result = 0; // i have been writing for hand all this time, and worked with operators and calculated bits so i can really understand what is happening everytime.
    int x = 15; //0000 1111 so this is 15 and i just calculated with my brain, and i will now shift the bits 4 times to the left by pointing them with left shift.
    int y = 12; //0000 1100
                // The result should display 240 in value of bits - since this is what i've got as an result by calculating this first on whiteboard.

    result = x << 4;
    
    //printf("The result is: %d\n",z);
 
    /*Now the idea is to check what is similar and give me the whole byte where bits are similar with the result
    */

    printf("Result left shifted: %d\n",result); //240!!!!!!!!!

    result = x & y; // this should give me 12 actually

    printf("Result compared: %d\n", result); //Yessssssss

    /*
    Now i want to shift to right on variable x - so it should be then 0000 0011 where this is three.
    */

    result = x >> 2; //i shift by two if i shift by four i will get 0 bits
    printf("Result right shifted: %d\n",result); //lets go!!!

    /*
    Now the only operators that i haven't been working with yet are ^ = XOR and  |= OR

    Now for OR = | only one of the bits needs to be one so the new one can be assigned with the new value
    if i have 0000 1111
              0000 1100
    result  = 0000 1111        
    */

    result = x | y; // the result should be 15 because 15 is 0000 1111 = 8+4+2+1 = 15

    printf("OR operator: %d\n", result);

    /*I will try usng XOR now.
    okay so only one of the bits can be assigned as one, not both. so if i actually have 1111
                                                                                         1111
                                                                                        this is just 0000 then since both are 1.
    0000 1111 = 15
    0000 1100 = 12
    0000 0011 = 3 // the only place where the bits can be assigned as one are 2^1 and 2^0;
    therefore will the result be three then since 1*2 = 2 and 1*1 = 1 -> 2+1 =3;
    */

    result = x ^ y;

    printf("XOR is = %d",result);
    
    return 0;
}