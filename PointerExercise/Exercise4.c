#include <stdlib.h>
#include <stdio.h>

const int MAX_SIZE = 100;
int main() {

    int number;
    int *p1;
    int array[MAX_SIZE];
    int counter = 0;

    for (int i = 0; i < MAX_SIZE; i++)
    {
        printf("\nSayi giriniz egerki sayi girmek istemiyorsaniz boş iken nokta basip basiniz: ");
        if (scanf("%d", &number) != 1)
        {
            break;
        }
        array[i] = number;
        counter++;
    }
    
    p1 = array;
    for (int a = 0; a < counter; a++)
    {
        p1++;
    }
    int length = p1 - array;
    
    printf("\nDizinin Uzunlugu: %d", length);


    return 0;
}