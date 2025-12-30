#include <stdio.h>
#include <stdlib.h>


int main(){

    int n = 5, *p1, *p2;

    p1 = (int*) malloc(n*sizeof(int));
    p2 = (int*) calloc(n, sizeof(int));

    if (p1 == NULL || p2 == NULL)
    {
        printf("\nBellek ayrilamadi");
        exit(0);
    }
    
    p1[0] = n;
    p2[0] = n;

    printf("\n1.mallocdeki deger: %d", p1[0]);
    free(p1);
    printf("\nislemden sonraki 1.mallocdeki deger: %d", p1[0]);
    printf("\n2.mallocdeki deger: %d", p2[0]);
    free(p2);
    printf("\nislemden sonraki 2.mallocdeki deger: %d", p2[0]);

    return 0;
}