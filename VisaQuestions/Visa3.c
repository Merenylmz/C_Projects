#include <stdio.h>
#include <stdlib.h>

int main(){

    int number = 0;
    printf("Sayi giriniz: ");
    scanf("%d", &number);
    for (int i = 0; i < number; i++)
    {
        for (int j = number-1; j > i; j--)
        {
            printf("-");
        }
        
        for (int a = 0; a <(2*i+1); a++)
        {
            printf("*");
        }
        for (int b = number-1; b > i; b--)
        {
            printf("-");
        }
        printf("\n");
    }
    

    return 0;
}