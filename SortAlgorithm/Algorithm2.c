#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Selection Sort
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
    
    int location, temp;
    for (int i = 0; i < (number-1); i++)
    {
        location = i;
        for (int a = i+1; a < number; a++)
        {
            if (arr[location]>arr[a])
            {
                location = a;
            }
        }
        if (location != i)
        {
            temp = arr[location];
            arr[location] = arr[i];
            arr[i] = temp;
        }
        
    }


    for (int b = 0; b < number; b++)
    {
        printf("\n%d", arr[b]);
    }
    
    
    return 0;
}