#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Point{
    float x;
    float y;
};

int main(){
    struct Point point;
    float input;
    printf("Noktanin X koordinatini giriniz: ");
    scanf("%f", &input);
    point.x = input;
    printf("\nNoktanin Y koordinatini giriniz: ");
    scanf("%f", &input);
    point.y = input;
    printf("\nNokta(%.1f, %.1f)", point.x, point.y);

    return 0;
}