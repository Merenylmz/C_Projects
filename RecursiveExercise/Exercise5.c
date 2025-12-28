#include <stdlib.h>
#include <stdio.h>

unsigned int primeNumber(int n){

    if (n<=1)
    {
        return 0;
    }

    for (int i = 2; i < n/2; i++)
    {   
        if (n % i == 0)
        {
            return 0;
        }
        
    }
    return 1;
} 

int main() {

    unsigned int number = 0;
    printf("Sayi giriniz: ");
    scanf("%d", &number);

    if (primeNumber(number) == 1)
    {
        printf("\nSayi asaldir");
    } else{
        printf("\nSayi asal degildir");
    }
     

    return 0;
}