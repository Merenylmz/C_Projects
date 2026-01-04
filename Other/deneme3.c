#include <stdlib.h>
#include <stdio.h>

int main(){

    for (int i = 1; i <= 5; i++)
    {
        
        for (int b = 5; b>=i; b--)
        {
            printf("-");
        }
        for (int a = 0; a < i; a++)
        {
            printf(" *");
        }
        for (int c = 5; c>=i; c--)
        {
            printf("-");
        }
        printf("\n");
    }
    

}