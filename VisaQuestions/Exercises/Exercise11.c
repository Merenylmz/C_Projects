#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int number = 0;
    printf("Sayi giriniz: ");
    scanf("%d", &number);
    for (int i = 0; i < number; i++)
    {
        printf("\nSayi: %d", fibonacci(i));
    }
    
    return 0;
}