#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{
    char name[15];
    float x;
    float y;
} PointArray;

int main(){
    PointArray points[10];
    float array[100];
    float input1, input2;
    char n[20];
    for (int i = 0; i < 5; i++)
    {
        printf("Noktanin adiniz giriniz: ");
        scanf("%s", &n);
        printf("Noktanin X koordinatini giriniz: ");
        scanf("%f", &input1);
        printf("\nNoktanin Y koordinatini giriniz: ");
        scanf("%f", &input2);
        strcpy(points[i].name, n);
        points[i].x = input1;
        points[i].y = input2;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\nNoktanin adi: %s\nNoktanin X'i: %f\nNoktanin Y'si: %f", points[i].name, points[i].x, points[i].y);
    }
    

    return 0;
}