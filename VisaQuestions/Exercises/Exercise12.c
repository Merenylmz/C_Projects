#include <stdio.h>
#include <stdlib.h>

int main(){

    int number = 0;
    printf("Kac tane sayi gireceksiniz: ");
    scanf("%d", &number);
    int *p = (int*)calloc(number, sizeof(int));
    for (int i = 0; i < number; i++)
    {
        printf("\n%d.Sayiyi giriniz: ", (i+1));
        scanf("%d", &p[i]);
    }

    int max = *p, min = *p;
    for (int i = 0; i < number; i++)
    {
        if (*(p+i)>max)
        {
            max = *(p+i);
        } 
        if(*(p+i)<min) {
            min = *(p+1);
        }
       
        
    }


    printf("\nMax:%d", max);
    printf("\nMin:%d", min);
    free(p);
    return 0;
}