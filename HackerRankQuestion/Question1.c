#include <stdio.h>
#include <stdlib.h>


int main(){
    unsigned int number = 0, result = 0, input;
    printf("Kac sayi girmek istediginizi giriniz: ");
    scanf("%d", &number);
    
    int array[number];
    printf("\nNumber: %d", number);
    for (int i = 0; i < number; i++)
    {
        printf("\n%d.Sayiyi giriniz: ", (i+1));
        scanf("%d", &input);
        array[i] = input;
    }


    for (int a = 0; a < number; a++)
    {
        result += array[a];
    }
    printf("\nToplam: %d", result);

    return 0;
}