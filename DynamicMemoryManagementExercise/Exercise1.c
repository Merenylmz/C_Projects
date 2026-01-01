#include <stdio.h>
#include <stdlib.h>

int main(){

    int number = 0;
    printf("sayi giriniz: ");
    scanf("%d", &number);
    int *p = (int*) malloc(number*sizeof(int));

    for (int i = 0; i < number; i++)
    {
        printf("\n%d.sayiyi giriniz: ", (i+1));
        scanf("%d", &p[i]); 
    }

    for (int a = 0; a < number; a++)
    {
        printf("\n%d", p[a]);
    }
    
    free(p);
    

    return 0;
}