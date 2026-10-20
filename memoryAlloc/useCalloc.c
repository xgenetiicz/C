#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>


struct Realloc {
    char changeItem[30];
    int items;
};

struct TestCalloc {
    char nameOfItem[30];
    int items;
    int *data; // i need a pointer to the heap block;
};

struct TestCalloc *testingCalloc(){
    struct TestCalloc *ptrcalloc = malloc(sizeof(struct TestCalloc));
    strcpy(ptrcalloc->nameOfItem, "I JUST USED CALLOC!!");
    ptrcalloc->items= 4; //THIS WILL THEN CALCULATE THE MEMORY TO 16 BYTES, since 4 items is 4 bytes each of an int

    /*
    we point the calloc to data in the structure of TestCalloc, where we say
    calculate allocation for ptrcalloc->items which this is 4, and get the size of which holds ints.
    */
    ptrcalloc->data = calloc(ptrcalloc->items,sizeof(int)); //because each strings ends with a "\0" so i need to make a room for it - so the memory dont cause bugs later.
    return ptrcalloc; //so when we call on the struct pointer, it should return the items to
    // 4 int's 
};

int main(){

    /* A reallocation works, if a memory is not big enough, we can reallocate the same variable with a bigger memory, without chaning the data inside
    so a realloc will work like int *x = realloc(x,y) so we say that x is a memory o another pointer.
    */

    struct TestCalloc testCalloc;

    size_t itemSize = sizeof(testCalloc.items);

    size_t structSize = sizeof(testCalloc);

    struct TestCalloc callocTest = {"nameOfItem",2};

    printf("Welcome, the callocTest is: %zu bytes in total\n",itemSize); // okay now i understand how i retrieve a field from struct to check the memory

    //of course, i should also check the whole struct -> where i will then pass the whole struct as the object instead of just the field
    printf("The struct size of callocTest is: %zu bytes\n",structSize); // it should give me 34? but it gives me 36 because of struct padding.'
    
    struct TestCalloc *t = testingCalloc(); // this should have been stored to the structSize now.. 

    printf("The struct size of callocTest is now: %zu bytes and the name of the items is: %s\n",_msize(t->data),t->nameOfItem); //it should give me 52
    

    /*
    The second large comment explains this comment, because of how i forgot to free the t->data pointer
    and set this pointer to null
    */
    //To check if the data will be freed:
    size_t freedData = _msize(t->data);
    free(t->data); 
    t->data = NULL;

    if(t->data == NULL) {
        printf("The bytes are now freed and released, pointer is: %p\n", t->data);
    } else {
        printf("The bytes are not released and the pointer is still active and not null: %p\n",t->data);
    }

    free(t); //Learned something critical. 
    /*
    Right now i was just freeing t, where this is the pointer to the structure,
    so i was never freeing the bytes for the data pointer - which will result in a memory leaking
    since i don't have any pointer pointing left for t->data since i freed the pointer itself first.
    */

    t = NULL;

    if(t == NULL) {
        printf("The pointer is now null: %p",t);
    }

    return 0;
}