#include <stdlib.h>
#include <stdio.h>

int divide(unsigned int n1, unsigned int n2){
    int result;

    if (n2 == 0)
    {
        return 0;
    }
    else if (n1-n2 == 0)
    {
        return 1;
    }
    else if (n2>n1)
    {
        return 0;
    }
    else
    {
        return 1+divide(n1-n2, n2);
    }
}

int main(){
    unsigned int number1, number2;
    printf("2 Sayi giriniz: ");
    scanf("%d %d", &number1, &number2);
    printf("\n Bolum Sonucu:%d", divide(number1, number2));
    printf("\n Kalan: %d", (number1-divide(number1, number2)*number2));

    return 0;
}