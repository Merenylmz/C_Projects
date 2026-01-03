#include <stdlib.h>
#include <stdio.h>

int customFunction(int startNumber, int finishNumber, int increaseNumber){
    int res = 0;
    if (startNumber<finishNumber)
    {
        res = startNumber + customFunction(startNumber+increaseNumber, finishNumber, increaseNumber); 
    }
    printf("\n%d", startNumber);
    return res;
}



int main(){
    int finishNumber, startNumber, increaseNumber;
    printf("\nEnter Finish Number: ");
    scanf("%d", &finishNumber);
    printf("\nEnter Start Number: ");
    scanf("%d", &startNumber);
    printf("\nEnter increase Number: ");
    scanf("%d", &increaseNumber);

    printf("\nSum Result: %d", customFunction(startNumber, finishNumber, increaseNumber));
    return 0;
}