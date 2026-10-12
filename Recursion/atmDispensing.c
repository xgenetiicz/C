/**
 * The task is to write a recursive function called 
 * dispenseCash(int amount) that simulates a atm machine dispensing 
 * 20 $ bills.
 * 
 * if the amount hits 0 dollars, it should display it to user
 * that the transaction is complete, and take their cash.
 * if the user has an amount of 100 dollars to take out in 20 dollars,
 * it should print the amount each time and recursively call itself
 * for each time with remaining amount. and this should be minus the total amount
 * each time
 */

/*
first of all declare it.
*/

void countMoney(int amount);

int main() {
countMoney(100);
printf("Transaction Complete! Please take your cash!");
}

//method to run the recursive amount
/*Now for this task, there should be something counting the balance
each time, and check this up with against the amount asked right.
*/

void countMoney(int amount) {
    if (amount > 0) { //because we want it to stop when amount is less than 0
        int withdrawal = 20; //20 dollars each withdrawal in transaction
        int result = amount - withdrawal;
        printf("Dispensing one $%d bill & remaining is: $%d \n",withdrawal,result);
        countMoney(result);
        return result;
    }
}
