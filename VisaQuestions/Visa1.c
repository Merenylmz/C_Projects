#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int number = 0;
    printf("Sayi giriniz: ");
    scanf("%d", &number);
    int length = 0, cacheNumber = number;
    while (number > 0)
    {
        number /=10;
        length++;
    }
    for (int i = 0; i < length; i++)
    {
        int n = pow(10, (i+1));
        int digit = (cacheNumber % n)/pow(10, i);
        printf("%d  ", digit);
    }
    
    return 0;
}