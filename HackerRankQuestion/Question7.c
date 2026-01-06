#include <stdio.h>
#include <stdlib.h>

int main() {

    int number = 0;
    printf("Sayi giriniz: ");
    scanf("%d", &number);
    if (number <=0 && number > 100)
    {
        printf("\nLutfen dizi uzunlugunu 0 ile 100 arasinda giriniz");
        return 0;
    }
    int arr[number];
    int input = 0;
    for (int b = 0; b < number; b++)
    {
        arr[b] = 0;
    }
    
    for (int i = 0; i < number; i++)
    {
        printf("\n%d.elemani giriniz: ", (i+1));
        scanf("%d", &input);
        if (input>number)
        {
            return 0;
            break;
        }
        arr[input] += 1;
    }
    for (int j = 0; j < number; j++)
    {
        if (arr[j] == 1)
        {
            printf("\n%d.indexdeki sayidan 1 tane var", j);
            break;
        }
                     
    }
    
    return 0;
}