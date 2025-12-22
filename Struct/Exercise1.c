#include <stdlib.h>
#include <stdio.h>
#include <string.h>


struct Car
{
    int isitSale; // satildiysa 1 
    union{
        double price;
        char brand[25];
    }info;

};

int main(){
    struct Car car1;

    car1.isitSale = 0;
    
    if (car1.isitSale)
    {
        car1.info.price = 20000;
    } else {
        strcpy(car1.info.brand, "Anadol");
    }

    car1.isitSale ? printf("Arabanin satis fiyati: %.2lf", car1.info.price) : printf("Arabanin markasi: %s", car1.info.brand);

    return 0;
}