#include <stdlib.h>
#include <stdio.h>

unsigned int factorial(unsigned int n){
    if (n == 0)
    {
        return 1;
    }
    
    if (n > 1)
    {
        return n * factorial(n-1);
    }
}

int main(){

    unsigned int number = 0;
    printf("Sayi giriniz: ");
    scanf("%d", &number);
    printf("\n Sonuc: %d", factorial(number));


    return 0;
}