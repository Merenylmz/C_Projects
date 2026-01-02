#include <stdio.h>
#include <stdlib.h>


    // int i, j;
    // int m[3][4];
    
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int a = 0; a < 4; a++)
    //     {   
    //         m[i][j] = i*10+a+1;
    //         printf("%3d", m[i][j]);
    //     }
    //     printf("\n");
    // }
    

int main(){

    int i, j;

    int **m = (int**)malloc(3*sizeof(int*));
    for (i = 0; i < 3; i++)
    {
        m[i] = (int*)malloc(4*sizeof(int));
        for (j = 0; j < 4; j++)
        {
            m[i][j] = i*10+j+1;
            printf("%3d", m[i][j]);
        }
        printf("\n");
    }

    free(m);
    return 0;
}