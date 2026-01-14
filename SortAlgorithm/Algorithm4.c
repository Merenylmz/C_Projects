#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//Quick Sort
void quickSort(int array[10], int start, int end){
    int temp;
    int pivot;
    int i,j;

    if (start < end)
    {
        pivot = start;
        i = start;
        j = end;

        while (i<j)
        {
            while (array[i]<=array[pivot] && i<end)
            {
                i++;
            }
            while (array[j]>array[pivot])
            {
                j--;
            }
            if (i<j)
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
        temp = array[pivot];
        array[pivot] = array[j];
        array[j] = temp;
        quickSort(array, start, j-1);
        quickSort(array, j+1, end);
    }
}

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

    quickSort(arr, 0, number-1);


    for (int b = 0; b < number; b++)
    {
        printf("\n%d", arr[b]);
    }
    return 0;
}