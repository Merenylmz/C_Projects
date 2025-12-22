#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Product {
    char title [15];
    unsigned int quantity;
    unsigned int price; 
};

int main() {
    
    struct Product product;
    strcpy(product.title, "Urun 1");
    product.price = 100;
    product.quantity = 15;

    printf("urun bilgileri: \t %s | %d | %i", product.title, product.price, product.quantity);


    return 0;
}