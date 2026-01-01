#include <stdio.h>
#include <stdlib.h>

int main(){
    int number = 0;
    printf("Sayi giriniz: ");
    scanf("%d", &number);

    int n = 0;

    int *p_even = (int*) calloc(number, sizeof(int));
    int *p_odd = (int*) calloc(number, sizeof(int));
    for (int i = 0; i < number; i++)
    {
        printf("\n%d.sayiyi giriniz: ", (i+1));
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            p_odd[i] = n;   
        } else {p_even[i] = n;}
    }
    
    for (int a = 0; a < number; a++)
    {
        if (p_odd[a] !=0)
        {
            printf("\ncift sayilar: %d", p_odd[a]);
        }
    }
    for (int a = 0; a < number; a++)
    {
        if (p_even[a] !=0)
        {
            printf("\n tek sayilar: %d", p_even[a]);
        }
    }
    
    free(p_even);
    free(p_odd);
    return 0;
}