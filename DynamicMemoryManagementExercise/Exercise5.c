#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    unsigned short number = 0;
    printf("sayi giriniz: ");
    scanf("%d", &number);
    int *p = (int*) malloc(number*sizeof(int));
    srand(time(NULL)); 

    for (unsigned int i = 0; i < number; i++)
    {
        int n = ((rand()/10)%100);
        printf("\n%d", n);
        p[i] = n;
    }

    unsigned int prev = 0, min;
    for (unsigned int a = 0; a < number; a++)
    {
        if (prev > p[a])
        {
            min = p[a];
        }
        prev = p[a];
    }

    printf("\nEn Kucuk sayi:%d", min);
    
    free(p);
    return 0;
}