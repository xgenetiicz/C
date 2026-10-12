#include <stdio.h>

void recursionCount(int k); //declare here

int main(){
recursionCount(10);    
return 0;

}

void recursionCount(int k){
    if (k > 0)
    printf("%d ", k);
    recursionCount(k - 1);
}