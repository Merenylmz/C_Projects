#include <stdlib.h>
#include <stdio.h>

const int MAX_SIZE = 100;

int main() {
    int number = 0, array[MAX_SIZE];
    int cloneArray[MAX_SIZE];
    int *p, *p_clone;
    p = array;
    p_clone = cloneArray;
    printf("Dizini uzunlugunu giriniz: ");
    gets(number);

    for (int i = 0; i < number; i++)
    {
        printf("\nSayi giriniz: ");
        scanf("%d", &number);
        array[i] = number;
    }
    
    


}
