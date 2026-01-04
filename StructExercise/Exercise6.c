#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846


union Calculate
{
    float envr;
    float area;
};


int main(){
    int radius = 0;
    printf("Enter a Radius: ");
    scanf("%d", &radius);

    union Calculate calc;

    printf("\nCevre: %f", (2*PI*radius));
    printf("\nAlan: %f", (PI*radius*radius));


    return 0;
}