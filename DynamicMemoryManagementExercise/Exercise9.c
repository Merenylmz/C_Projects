#include <stdio.h>
#include <stdlib.h>

int main(){
    int number = 0;
    printf("Sayi giriniz: ");
    scanf("%d", &number);

    int **matris = (int**)calloc(number, sizeof(int *));
    for (int i = 0; i < number; i++)
    {
        matris[i] = (int*)calloc(number, sizeof(int));
        for (int j = 0; j < number; j++)
        {
            matris[i][j] = (j+1);
        }
    }

    int result = 0, n;
    for (int a = 0; a < number; a++)
    {
        for (int b = 0; b < (a+1); b++)
        {  
            n = matris[a][b];
        }
        for (int c = 0; c < number; c++)
        {
            printf("%3d", matris[a][c]);
        }
        
        result += n;
        printf("\n");
    }
    
    printf("\nResult: %d", result);
        
    return 0;
}