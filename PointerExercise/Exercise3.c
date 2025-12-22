#include <stdlib.h>
#include <stdio.h>

void changePlaceWithPointer(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
// void changePlace(int s1, int s2){
//     int temp = s1;
//     s1 = s2;
//     s2 = temp;
// }

int main() {
    int number1, number2;
    printf("2 Sayi giriniz: ");
    scanf("%d%d", &number1, &number2);

    changePlaceWithPointer(&number1, &number2);
    printf("\n%d\n", number1);
    printf("%d\n", number2);


    return 0;
}