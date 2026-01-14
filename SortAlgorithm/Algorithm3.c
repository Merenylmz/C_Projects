#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Insertion Sort
int main(){

    srand(time(0));
    int number = 0;
    printf("Sayi giriniz: ");
    scanf("%d", &number);

    int arr[number];

    for (int j = 0; j < number; j++)
    {
        arr[j] = rand()%100;
    }

    int a, temp;
    for (int i = 1; i < number; i++)
    {
        a = i;
        while (a > 0 && arr[i]<arr[i-1])
        {
            temp = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = temp;
            a--;
        }
        
    }
    for (int b = 0; b < number; b++)
    {
        printf("\n%d", arr[b]);
    }
    

    return 0;
}