#include <stdio.h>
#include <stdlib.h>


int main() {
    int *p, input;

    p = (int*) malloc(3*sizeof(int));
    if (p == NULL)
    {
        printf("Alan ayrilamadi");
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\nNotu giriniz: ");
        scanf("%d", &input); 
        p[i] = input;

    }
    free(p);


    printf("\n%d", p[4]);

    // p = (int*) realloc(p, 6 * sizeof(int));

    // for (int i = 0; i < 6; i++)
    // {
    //     printf("");
    // }
    
    return 0;
}