#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Contender {
    char name[15], surname[20];
    float performance, score;
};

float calculatePerformanceScore(struct Contender contender){
    float array[10];
    printf("\nOyuncunun performansi: %f", contender.performance);
    for (int i = 0; i < 10; i++)
    {
        float input;
        printf("\n%d. Hakem Puanini giriniz: ", (i+1));
        scanf("%f", &input);
        printf("%f", input);
        if (input>6 || input<0)
        {
            printf("\nLutfen 0 ile 6 arasi sayilar giriniz");
            i--;
            continue;
        }
        array[i] = input;        
  
        
    }
    float prevNumberMax = array[0], prevNumberMin = array[0], prevNumber, sum = 0;
    for (int a = 0; a < 10; a++)
    {
        sum += array[a]; 
        if (array[a] > prevNumberMax) {
            prevNumberMax = array[a];
        }

        if (array[a] < prevNumberMin) {
            prevNumberMin = array[a];
        }
        prevNumber = array[a];
    }
    
    printf("\n%f  %f\n", prevNumberMax, prevNumberMin);
    return (sum - (prevNumberMax+prevNumberMin));
};

int main() {
    unsigned int random = rand() % 10;
    char input[25], input2[25];
    struct Contender contender;
    printf("Yarismacinin adi: ");
    scanf("%s", &input);
    strcpy(contender.name, input);
    printf("\nYarismacinin Soyadi: ");
    scanf("%s", &input2);
    strcpy(contender.surname, input2);

    contender.performance = random;
    printf("\n%f", calculatePerformanceScore(contender));
    

    return 0;
}