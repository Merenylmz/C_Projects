#include <stdlib.h>
#include <stdio.h>


int powerOfNumber(int floor, int force){

    if (force >1)
    { 
        return floor*powerOfNumber(floor, (force-1));
    }
}

int main(){
    int floor = 0, force;
    printf("Enter a floor: "); 
    scanf("%d", &floor);
    printf("\nEnter a Force: ");
    scanf("%d", &force);

    printf("Result: %d", powerOfNumber(floor, force));

    return 0;
}