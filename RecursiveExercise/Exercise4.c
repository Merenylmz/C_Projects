#include <stdlib.h>
#include <stdio.h>

void evenNumberList (unsigned int n){
    if (n%2!=0)
    {
        printf("\n%d", n);
    }
    if (n > 0)
    {
        evenNumberList(n-1);
    }
};


int main(){

    unsigned int number = 0;
    printf("Sayi giriniz: ");
    scanf("%d", &number);
    evenNumberList(number);

    return 0;
}