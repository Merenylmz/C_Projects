#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void list(int* p, int n){


}

void create(int *p, int n){


}

int main(){

    int number = 0;
    printf("sayi giriniz: ");
    scanf("%d", &number);
    int *p = (int*) malloc(number*sizeof(int));
    srand(time(NULL));

    for (int i = 0; i < number; i++)
    {
        int n = ((rand()/10)%10);
        p[i] = n;
    }

    int temp;
    for (int a = 0; a < number-1; a++)
    {
        for (int i = 0; i <number-a-1 ; i++)
        {
            if (p[i]>p[(i+1)])
            {
                temp = p[i];
                p[i] = p[(i+1)];
                p[(i+1)] = temp;    
            }
            
        }
        
    }
    for (int b = 0; b < number; b++)
    {
        printf("\n%d", p[b]);
    }
    
    free(p);
    return 0;
}