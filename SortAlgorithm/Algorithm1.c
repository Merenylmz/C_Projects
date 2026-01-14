#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Bubble Sort
int main(){

    int number = 0;
    printf("Sayi giriniz: ");
    scanf("%d", &number);

    int arr[number];
    srand(time(0));
    for (int i = 0; i < number; i++)
    {
        arr[i] = rand()%100;
    }

    for (int a = 0; a < (number-1); a++)
    {
        
        for (int b = 0; b < (number-1-a); b++)
        {
            if (arr[b]> arr[b+1])
            {
                int temp = arr[b];
                arr[b] = arr[b+1];
                arr[b+1] = temp;
            }
        }
    }
    
    for (int c = 0; c < number; c++)
    {
        printf("\nDizi: %d", arr[c]);
    }
    
    return 0;
}