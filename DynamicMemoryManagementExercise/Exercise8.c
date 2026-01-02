#include <stdio.h>
#include <stdlib.h>

int main(){

    unsigned int row, column, input;
    printf("Enter Rows Number: ");
    scanf("%d", &row);
    printf("\nEnter Column Number: ");
    scanf("%d", &column);

    int **matris;

    matris = (int**) calloc(row, sizeof(int*));

    for (int i = 0; i < row; i++)
    {
        matris[i] = (int*) calloc(column, sizeof(int));
        for (int j = 0; j < column; j++)
        {
            printf("\n%d.Satir %d.sutundaki degere ne girelim sirasiyla giriniz: ", i+1, j+1);
            scanf("%d", &input);
            matris[i][j]= input;
        }
    }

    for (int a = 0; a < row; a++)
    {
        for (int b = 0; b < column; b++)
        {
            printf("%3d", matris[a][b]);
        }
        printf("\n");
    }
    

    return 0;
}