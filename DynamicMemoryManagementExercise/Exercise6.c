#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int number = 0;
    printf("sayi giriniz: ");
    scanf("%d", &number);
    int *p = (int*) malloc(number*sizeof(int));
    srand(time(NULL));

    for (int i = 0; i < number; i++)
    {
        int n = ((rand()/10)%10);
        printf("\n%d", n);
        p[i] = n*n;
    }

    for (int a = 0; a < number; a++)
    {
        printf("\n%d", p[a]);
    }
    
    free(p);
    return 0;
}