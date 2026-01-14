#include <stdio.h>
#include <stdlib.h>

int main(){

    int number = 0;
    printf("Sayi giriniz: ");
    scanf("%d", &number);

    int arr[number];

    for (int j = 0; j < number; j++)
    {
        printf("\n%d.Sayiyi giriniz: ", (j+1));
        scanf("%d", &arr[j]);
    }

    int searchingNumber = 0;
    printf("\nAranan sayiyi giriniz: ");
    scanf("%d", &searchingNumber);

    int a;
    for (a = 0; a < number; a++)
    {
        if (arr[a] == searchingNumber)
        {
            printf("Sayi bulundu Dizide %d.sirada", (a+1));
            break;
        }
    }
    if (a == number-1)
    {
        printf("\nSayi bulunamadi");
    }
    
    

    return 0;
}