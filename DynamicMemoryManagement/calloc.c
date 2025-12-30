#include <stdio.h>
#include <stdlib.h>


int main(){

    int number = 0;
    printf("Sayi giriniz: ");
    scanf("%d", &number);

    int *p;

    p = (int*) calloc(number, sizeof(int));
    if (p == NULL)
    {
        printf("\nBellekten yer ayrilamadi");
        abort();
        return 0;
    }
    

    for (int i = 0; i < number; i++)
    {
        p[i] = i+1;
    }

    for (int a = 0; a < number+2; a++)
    {
        printf("\n%d", p[a]);
    }

    free(p);

    return 0;
}