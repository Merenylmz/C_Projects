#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void listRandomNumbers(int *a, int length){
    if (length>-1)
    {
        a[length] = (rand()/10)%100;
        listRandomNumbers(a, length-1);
    }
}

void list(int arr[], int n){
    int temp, i;
    if (n>0)
    {
        for (i = 0; i < n; i++)
        {
            if (arr[i]>arr[(i+1)])
            {
                int temp = arr[(i+1)];
                arr[(i+1)] = arr[i];
                arr[i] = temp;   
            }
            
        }
        list(arr, n-1);
    }
}

int main(){
    srand(time(NULL));
    int number;
    printf("Enter a Number: ");
    scanf("%d", &number);
    int *array = (int*)malloc(number*sizeof(int));

    listRandomNumbers(array, number-1);
    list(array, number);

    for (int b = 0; b < number; b++)
    {
        printf("\n%d", array[b]);
    }
    free(array);
    return 0;
}