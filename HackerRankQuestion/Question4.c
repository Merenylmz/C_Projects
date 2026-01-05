#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    unsigned int length = 0, taskNumber = 0;
    printf("Dizi Boyutunu giriniz: ");
    scanf("%d", &length);
    printf("\nIslem sayisini giriniz: ");
    scanf("%d", &taskNumber);
    
    if (length<3 || length>pow(10, 7))
    {
        printf("\nLutfen Dizi uzunlugunu 3 ile 10^7 arasında giriniz...");
        return 0;
    } if (taskNumber<1 || 2*pow(10, 5)<taskNumber)
    {
        printf("\nLutfen islem sayisini 1 ile 2X10^5 arasında giriniz...");
        return 0;
    }
    int *array = (int*)calloc(length, sizeof(int));

    printf("Baslangic: [");
    for (int i = 0; i < length; i++)
    {
        printf("%d,", array[i]);
    }
    printf("]");


    int a,b,k;
    for (int i = 0; i < taskNumber; i++)
    {
        printf("\n'a' ilk siniri giriniz: ");
        scanf("%d", &a);
        printf("\n'b' ikinci siniri giriniz: ");
        scanf("%d", &b);
        printf("\n'k' artis miktarini giriniz: ");
        scanf("%d", &k);

        if (a>b)
        {
            printf("\nilk sinir ikinci sinirdan buyuk olamaz");
            return 0;
        }
        
        for (int c = a; c <= b; c++)
        {
            array[c] = k + array[c];
        }
    }


    int max = 0;
    for (int j = 1; j < length; j++)
    {
        if (array[j]>array[j-1])
        {
            max = array[j];
        } 
    }
    
    printf("Son durum: [");
    for (int h = 0; h < length; h++)
    {
        printf("%d,", array[h]);
    }
    printf("]");
    printf("\nMAX: %d", max);

    return 0;
}