#include <stdio.h>
#include <stdlib.h>

int main() {
    int number; 
    int queryCount;
    
    printf("Kutu sayisini (N) giriniz: ");
    scanf("%d", &number);
    
    printf("Sorgu sayisini (Q) giriniz: ");
    scanf("%d", &queryCount);

    int **arrays = (int**)malloc(sizeof(int*) * number); 
    
    int *sizes = (int*)calloc(number, sizeof(int)); 

    for (int i = 0; i < number; i++) {
        arrays[i] = (int*)malloc(sizeof(int) * number);
    }
    
    int lastAnswer = 0; 
    
    int type, x, y; 

    printf("\nFormat: [Tip] [X] [Y] (Ornek: 1 0 5)\n");

    for (int k = 0; k < queryCount; k++) {
        scanf("%d %d %d", &type, &x, &y);

        int index = (x ^ lastAnswer) % number; 

        if (type == 1) {
            int currentSize = sizes[index];
            arrays[index][currentSize] = y;
            sizes[index]++;
        } 
        else if (type == 2) {
            int elementIndex = y % sizes[index];
            int value = arrays[index][elementIndex];
            lastAnswer = value;
            printf("%d\n", lastAnswer);
        }
    }

    free(arrays);
    free(sizes);
    return 0;
}