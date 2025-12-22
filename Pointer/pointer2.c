#include <stdlib.h>
#include <stdio.h>


int main() {
    int *number1, *number2;
    int n1 = 10, n2= 20;

    number1 = &n1;
    number2 = &n2;

    printf("Before Value: %d\n", *number1);
    printf("Before Address: %d\n", number1);
    *number1 = *number2 + 5;
    printf("Before Value: %d\n", *number1);
    printf("Before Address: %d\n", number1);


    //yeni bir değer için gidip yeni bir adres tanımalamak yerine hali hazırda kullanılan adres güncelleniyor bu sayede
    // program daha hızlı ve daha az yer kaplayarak çalışır



    return 0;
}