#include <stdlib.h>
#include <stdio.h>
#include <string.h>

union Point{
    float x;
    float y;
};

int main(){
    union Point point;
    float input1, input2;
    printf("Noktanin X koordinatini giriniz: ");
    scanf("%f", &input1);
    point.x = input1;
    printf("\nNoktanin Y koordinatini giriniz: ");
    scanf("%f", &input2);
    point.y = input2;
    printf("\nNokta(%.1f, %.1f)", point.x, point.y);

    return 0;
}