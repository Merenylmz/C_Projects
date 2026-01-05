#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Matris Uzunlugunu giriniz: ");
    scanf("%d", &n);
    int **matris = (int**)malloc(n*sizeof(int*));

    int firstCorner[n], secondCorner[n], input1, input2;

    for (int i = 0; i < n; i++)
    {
        matris[i] = (int*)malloc(n*sizeof(int));
        for (int a = 0; a < n; a++)
        {
            printf("\n%d.satir %d.sutunu giriniz: ", (i+1), (a+1));
            scanf("%d", &input1);
            matris[i][a] = input1;
        }   
    }

    for (int i = 0; i < n; i++)
    {
        // matris[i] = (int*)malloc(n*sizeof(int));
        for (int a = 0; a < n; a++)
        {
            firstCorner[i] = matris[i][i];
            secondCorner[i] = matris[i][n-i-1];
        }   
    }

    int result1 = 0, result2 = 0;
    for (int c = 0; c < n; c++)
    {
        result1 += firstCorner[c];
        result2 += secondCorner[c];
    }

    printf("\nIlk Kosegen toplamlari: %d", result1);
    printf("\nIkinci Kosegen toplamlari: %d", result2);
    

    return 0;
}