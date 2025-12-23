#include <stdio.h>
#include <stdlib.h>

int main(){
    int items1, items2, input, *p;

    printf("Kac eleman eklemek istersiniz: ");
    scanf("%d", &items1);


    p = (int*) malloc(items1 * sizeof(int));
    if (p == NULL)
    {
        printf("\nYer ayrilamadi");
        return 1;
    }
    printf("\nilk elemanlar: ");
    for (int i = 0; i < items1; i++)
    {
        printf("\n%d. elemani giriniz: ", (i+1));
        scanf("%d", &input);
        p[i] = input;
    }
    

    printf("\nKac elemanlik yer daha acmak istersiniz: ");
    scanf("%d", &items2);
    p = (int*) realloc(p, (items2+items1) * sizeof(int));
    if (p == NULL)
    {
        printf("\nYer ayrilamadi");
        return 1;
    }

    for (int a = items1; a < (items1+items2); a++)
    {
        printf("\n%d. elemani giriniz: ", (a+1));
        scanf("%d", &input);
        p[a] = input;
    }
    
    for (int b = 0; b < (items1+items2); b++)
    {
        printf("\n%d", p[b]);
    }
    
    
    free(p);
    return 0;
}