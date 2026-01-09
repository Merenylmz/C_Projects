#include <stdio.h>
#include <stdlib.h>

int factorial(int n){

    if (n==0)
    {
        return 1;
    }
    

    return n*factorial(n-1);
}

int main(){

    int number = 0;
    printf("Sayi giriniz: ");
    scanf("%d", &number);
    printf("\n%d", factorial(number));

    return 0;
}