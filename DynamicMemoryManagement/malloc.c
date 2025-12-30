#include <stdio.h>
#include <stdlib.h>


int main(){

    unsigned int number = 0;
    printf("Sayi giriniz: ");
    scanf("%d", &number);

    int *p;

    p = (int*) malloc(sizeof(int)*number);
    if (p == NULL)
    {
        printf("\nBellekten yer ayrilamadi");
        exit(0);
    }
    

    for (int i = 0; i < number; i++)
    {
        p[i] = i+1;
    }

    for (int a = 0; a < number; a++)
    {
        printf("\n%d", p[a]);
    }
    
    

    free(p);

    return 0;
}