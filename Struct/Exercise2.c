#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct ComplexNumber {
    float reel, imagine;
};


int main(){
    float a1, a2, b1, b2;
    char operator;
    printf("\nOperator secimini yapiniz: ");
    scanf("%c", &operator);
    printf("Birinci karmasik sayiyi giriniz: ");
    scanf("%f %f", &a1, &a2);
    printf("\nikinci sayiyi giriniz:");
    scanf("%f %f", &b1, &b2);

    if (operator == '+')
    {
        printf("%.1f+(%.1fi)", (a1+b1), (a2+b2));
    } else {
        printf("%.1f+(%.1fi)", (a1-b1), (a2-b2));
    }
    
    return 0;
}