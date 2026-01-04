#include <stdlib.h>
#include <stdio.h>

void printStar(unsigned short length){
    if (length > 0)
    {
        printf("\n");
        for (int i = 0; i < length; i++)
        {
            printf("* ");
        }
        printStar((length-1));
    }
}

int main(){
    unsigned short length = 0;
    printf("Enter a Number: ");
    scanf("%u", &length);

    printStar(length);
    return 0;
}