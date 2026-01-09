#include <stdio.h>
#include <stdlib.h>

int main(){

    int number = 0;
    printf("Sayi giriniz: ");
    scanf("%d", &number);

    int *p = (int*)malloc(sizeof(int)*number);
    for (int i = 0; i < number; i++)
    {
        printf("\n%d.Sayiyi giriniz: ", (i+1));
        scanf("%d", &p[i]);
    }
    int odd = 0, even = 0;
    for (int i = 0; i < number; i++)
    {
        if (p[i] % 2 == 0)
        {
            
            even ++;   
        } else {
            odd ++;
        }
    }

  
    
    

    return 0;
}