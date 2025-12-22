#include <stdlib.h>
#include <stdio.h>

int main() {

    int number1, number2;
    int *p1, *p2;

    printf("1.sayiyi giriniz: ");
    scanf("%d", &number1);
    printf("\n2.sayiyi giriniz:");
    scanf("%d", &number2);

    p1 = &number1;
    p2 = &number2;

    printf("\nPointer ile Toplama: %d", (*p1+*p2));
    printf("\nNormal Toplama: %d", (number1+number2));

    return 0;
}