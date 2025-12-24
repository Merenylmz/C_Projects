#include <stdio.h>
#include <stdlib.h>


float averageNote(int* array, unsigned int length){
    unsigned int result = 0;
    for (int i = 0; i < length; i++)
    {
        result += array[i];
    }
    return result / length;
}

int addNote(){
    static unsigned int counter = 0;
    counter++;
    return counter;
}

int main(){
    unsigned int n; 
    int *p, input;
    unsigned int counter2;

    printf("Kac tane not girilmeli: ");
    scanf("%d", &n);
    p = (int*) malloc(n*sizeof(int));

    for (int a = 0; a < n; a++)
    {
        printf("\n%d. Notu giriniz: ", (a+1));
        scanf("%d", &input);
        p[a] =  input;
        counter2 = addNote();
    }

    printf("\nNotlarin ortalamasi: %.2f", averageNote(p, n));
    printf("\nKac not girildi: %d", counter2);

    free(p);
    return 0;
}