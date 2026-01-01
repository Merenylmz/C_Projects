#include <stdio.h>
#include <stdlib.h>

int main(){
    int number1 = 0, number2 = 0;
    printf("1.sayiyi giriniz: ");
    scanf("%d", &number1);
    printf("\n2.sayiyi giriniz: ");
    scanf("%d", &number2);

    int *p = (int*) malloc(sizeof(int)*2);
    p[0] = number1;
    p[1] = number2;
    printf("\nSirasiyla girilen ifadeler: %d, %d", p[0], p[1]);

    int temp = p[0];
    p[0] = p[1];
    p[1] = temp;

    printf("\nGuncellendi!! --> Sirasiyla girilen ifadeler: %d, %d", p[0], p[1]);

    free(p);
    return 0;
}