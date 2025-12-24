#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int number = 120;
    int *p, **p1;

    p = &number;
    p1 = &p;
    
    printf("Sayi: %d\n", number);
    printf("--------------------------------------------\n\n");
    printf("1 Pointerli Sayi: %d\n", p);// number'ın adresi
    printf("1 Pointerli Sayi: %d\n", &p); // number'ın adresini tutan pointer değişkeni olan p nin adresi
    printf("1 Pointerli Sayi: %d\n", *p); // pointerin tuttuğu adrese gidip oradan veriyi alıp gelir yani 120 yazar
    printf("\n--------------------------------------------\n\n");
    printf("2 Pointerli Sayi: %d\n", p1);
    printf("2 Pointerli Sayi: %d\n", &p1);//number'ın adresini tutan pointer değişkeni olan p nin adresini tutan p1 pointerının adresi
    printf("2 Pointerli Sayi: %d\n", *p1);// pointerin tuttuğu adrese gidip oradan veriyi alıp gelir yani &p yazar
    printf("\n--------------------------------------------\n\n");


    return 0;
}