#include <stdlib.h>
#include <stdio.h>

void list(unsigned int n){

    if (n == 0)
    {
        printf("%d", n);
    } else {
        printf("%d\n", n);
        list(n-1);
    }
    
}


int main() {

    unsigned int number = 0;
    printf("Sayi giriniz: ");
    scanf("%d", &number);
    list(number);

    return 0;
}