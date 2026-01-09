#include <stdio.h>
#include <stdlib.h>

void reverseNumberDigit(int number){
    if (number <= 0)
    {
        return;
    }
    
    int digit = number % 10;
    printf("%d", digit);

    reverseNumberDigit(number/10);
}


int main(){
    int number = 0;
    printf("Sayi giriniz: ");
    scanf("%d", &number);
    reverseNumberDigit(number);

    return 0;
}