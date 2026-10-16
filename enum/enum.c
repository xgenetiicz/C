#include <stdio.h>

enum Level {
    LOW = 25,
    MEDIUM = 50,
    HIGH = 75
};


struct Temperature {
    char country[10];
    char city[10];
    float temperature; // 4 bytes for a float, 24 bytes in total for this struct and there is noe padding here. 
};

void declareTheTemperature(struct Temperature *changeTemp);

int main () {
    struct Temperature temp = {"Norway","Trondheim",10.00f};
    enum Level myEnumTemp = LOW;

    //check the size of the struct
    printf("The size of the struct is: %zu\n",sizeof(temp));

    declareTheTemperature(&temp); // yesss!!!!!!!!!!!!!!!

    if(temp.temperature < myEnumTemp) {
        printf("The temperature is below: %d and the temperature is: %.2f\n", myEnumTemp,temp.temperature);
    } else {
        printf("The temperature is above:  %d\n", myEnumTemp);
    }
    return 0;
}


void declareTheTemperature(struct Temperature *changeTemp) {
    changeTemp->temperature = 15.00f;
}