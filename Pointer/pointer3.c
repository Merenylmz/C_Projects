#include <stdlib.h>
#include <stdio.h>


// void change(int *p1, int *p2){
//     int temp;
//     temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
// }

void change (int s1, int s2){
    int temp = s1;
    s1 = s2;
    s2 = temp;
    printf("a of value: %d, b of value: %d in the function \n", s1, s2);
}

int main() {

    // // pointer ile kullanılan sistem
    // int a = 10, b = 20;
    // printf("Before running function a of value: %d, b of value: %d\n", a, b);
    // change(&a, &b);
    // printf("After running function a of value: %d, b of value: %d\n", a, b);


    // //normal function (without pointer)

    int a = 10, b = 20;
    printf("Before running function a of value: %d, b of value: %d\n", a, b);
    change(a, b);
    printf("After running function a of value: %d, b of value: %d\n", a, b);

    //pointer kullanınca değişkenler global olur yani direk bellek üzerinden alır ve bellek üzerine yazar fakat normal fonksiyonda 
    // referansını tutar ve ona yazar o yüzden asıl tutulan adresteki değere karışamaz orası olduğu gibi kalır
    return 0;
}