#include <stdio.h>
#include <stdlib.h>

int main(){
    int number = 0;
    printf("Sayi giriniz: ");
    scanf("%d", &number);

    for (int i = 0; i < number; i++)
    {
        for (int a = 0; a < (number - i); a++)
        {
            printf(" ");
        }
        for (int c = 0; c <= i; c++)
        {
            printf("#");
        }
        printf("\n");
    }
    
    return 0;
}